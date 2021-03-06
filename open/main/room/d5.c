// Room: /open/main/room/d5.c

inherit ROOM;

void create()
{
	set("short", "沙漠");
    set("long", "这儿是一望无际的撒哈拉沙漠，但在风沙的边缘却有个老头在那洒扫，
在他身后还有个颇大的帐篷。
");

  set("exits", ([ /* sizeof() == 4 */
  "enter" : "/open/badman/room/d_c.c",
  "west" : __DIR__"d4",
  "south" : __DIR__"d12",
  "east" : __DIR__"d6",
]) );
  set("objects",([ /* sizeof() == 1 */
  "/open/badman/ride/deserter.c" : 1,
]) );

  set("outdoors", "/open/main" );


  setup();
}

int valid_leave(object who, string dir)
{
  if(dir=="enter" && !who->query_temp("marks/f_c_ent"))
  return notify_fail("没经过主人允许可别乱闯喔！\n");
  return ::valid_leave(who, dir);
}

void init() {
  add_action("do_trade","want");
}

int do_trade(string str) {
  int exp;
  object me,wolf;
  me=this_player();
  exp=me->query("combat_exp");
  if(me->query_temp("marks/have_wolf",1))
  return notify_fail("[1;33m你不是有座骑了吗？[0m\n");
  if (!me->query("quests/w_camel",1))
  return notify_fail("[1;33m你在跟我要啥？[0m\n");
  if (exp<1200000)
    return notify_fail("[1;37m你要骑？我看你没这本事！[0m\n");
  new("/open/badman/ride/r_camel.c")->move(environment(me));
  me->set_temp("marks/have_wolf",1);
  message_vision("[1;37m老头把骆驼牵了出来。[0m\n",me);
  return notify_fail("[1;32m千万别亏待这骆驼啊！[0m\n");
}
