// copy from Room: /open/wiz/post_office.c

inherit ROOM;

void create ()
{
  set ("short", "武威镳局附设文书部");
  set ("long", @LONG
这是一间十分杂乱的房间，到处堆满了各地往来的文书，包括各省
的通告。如果你想写信给远在他乡的亲友，可以来此地办理各种文书业
务，由于武威镳局信用可靠，所以不必担心文书会遗失。
    前面竖着一块木牌(sign)，上面似乎有字，你不妨靠近点瞧瞧。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/center/room/biau",
]));

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "牌子上写道：

          各种业务请见说明书。

",
]));

  set("light_up", 1);

  setup();
}

int valid_leave(object me, string dir)
{
        object mbox;

        if( mbox = me->query_temp("mbox_ob") ) {
                tell_object(me, "你将说明书仔细摆\放好。\n");
                destruct(mbox);
        }
        return 1;
}

void init()
{
  object mbox;

  seteuid(getuid());

  if( !this_player()->query_temp("mbox_ob") ) {
    mbox = new(MAILBOX_OB);
    if (mbox->move(this_player()))
      write ("掌柜的一看你踏进门来, 马上哈腰递给你一张说明书\n");
  }

  add_action ("do_home", "home");
  add_action ("do_goto", "goto");
}

int do_home(string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "你将说明书交回驿站。\n");
    destruct(mbox);
  }
  
  return 0;
}

int do_goto (string arg)
{
  object mbox, me;

  me = this_player();
  if( mbox = me->query_temp("mbox_ob") ) {
    tell_object(me, "你将说明书交回驿站。\n");
    destruct(mbox);
  }
  
  return 0;
}
