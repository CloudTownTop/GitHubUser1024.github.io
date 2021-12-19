<%
Dim RefreshTime, IdleTime, TotalUsers, OnlineUser(), Tmp(), Num, I, ID
RefreshTime = 10 '设置网页自动更新时间为10秒
IdleTime = RefreshTime * 3 '设置闲置时间为自动更新时间的3倍
Application.Lock
'清点所有连线到此网页的浏览器，然后将目前打开的浏览器的SessionID放入数组的最后面
If Application(Session.SessionID & "LastAccessTime") = Empty Then
If Application("TotalUsers") = Empty Then Application("TotalUsers") = 0
ReDim Tmp(Application("TotalUsers") + 1)
Num = 0
If Application("TotalUsers") > 0 Then
For I = LBOUND(Application("OnlineUser")) To UBOUND(Application("OnlineUser"))
ID = Application("OnlineUser")(I)
If ID <> Session.SessionID Then
Tmp(Num) = ID
Num = Num + 1
End If
Next
End If
Tmp(Num) = Session.SessionID
Application("TotalUsers") = Num + 1
ReDim Preserve Tmp(Application("TotalUsers"))
Application("OnlineUser") = Tmp
End If
'记录目前打开的浏览器的最近存取时间
Application(Session.SessionID & "LastAccessTime") = Timer
'检查所有连线到此网页的浏览器的最近存取时间，若与目前时间相差30秒以上，表示离线
ReDim Tmp(Application("TotalUsers"))
Num = 0
For I = 0 To Application("TotalUsers") - 1
ID = Application("OnlineUser")(I)
If (Timer - Application(ID & "LastAccessTime")) < IdleTime Then
Tmp(Num) = ID
Num = Num + 1
Else
Application(ID & "LastAccessTime") = Empty
End If
Next
'Num表示目前在线人数，若与Application("TotalUsers")不同，表示中间有人离线
If Num <> Application("TotalUsers") Then
ReDim Preserve Tmp(Num)
Application("OnlineUser") = Tmp
Application("TotalUsers") = Num
End If
Application.UnLock
%>
<HTML>
<HEAD>
<META HTTP-EQUIV="Refresh" CONTENT="<%= RefreshTime %>, URL=<%= Request.ServerVariables("PATH_INFO") %>">
目前在线人数：<%= Application("TotalUsers") %>
