import { defaultValueCtx, Editor } from "@milkdown/core";
import { nord } from "@milkdown/theme-nord";
import { commonmark } from "@milkdown/preset-commonmark";
import { emoji } from "@milkdown/plugin-emoji";

import "https://8xobc.csb.app/style.css";

Editor.make()
  .config((ctx) => {
    ctx.set(defaultValueCtx, "# Milkdown :heartpulse: Vanilla");
  })
  .use(nord)
  .use(commonmark)
  .use(emoji)
  .create();
