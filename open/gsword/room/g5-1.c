// Room: /open/gsword/room/g5-1.c
inherit ROOM;

void create ()
{
  set ("short", "仙剑凌霄宝殿");
  set ("long", @LONG
这里就是天下剑士总本部。殿中一张太师椅，一个白发须须的老者正
高坐其上。凌霄宝殿虽位于仙剑派中，但因其是剑士公会的所在，因此装
璜的金壁辉黄，迥异于其它仙剑剑筑，四只金龙冲天而起，分立四方。近
年来由于仙剑的兴起，剑道成为武学主流，凌霄宝殿也俨然成为武林总部
。大殿的左后方有个招牌(sign)。左边的墙上挂着一张羊皮(paper) 写着
仙剑武术的简介。
 
LONG);
  set("item_desc", ([ /* sizeof() == 2 */
  "sign" : "招牌上写着:
欲办理加盟剑士公会手续者 ,请在蜀中连络处就近办理 ,本总部恕不受理 .\n",
 "paper" :" 欲知仙剑武学，请键入help shasword\n",
  ]));
  set("exits",([ /* sizeof() == 5 */
  "up" : "/open/gsword/room/eqroom.c",
  "west" : "/open/gsword/room/g4-10.c",
  "south" : "/open/gsword/room/g4-2",
  "north" : "/open/gsword/room/g5-2.c",
  "east" : "/open/gsword/room/g5-8.c",
]));

  set("light_up", 1);

  set("no_fight", 0);

  set("objects", ([ /* sizeof() == 1 */
   "/daemon/class/swordsman/master" :1,
]));

   set("valid_startroom", 1);

  setup();
  call_other("/obj/board/swordsman_b","????");
}

 int valid_leave(object me, string dir)
{
if( dir=="up" )
if( me->query("family/family_name")!="仙剑派"
	&& !wizardp(me) )
   return notify_fail("只有仙剑门徒才能进入\n");
return ::valid_leave(me,dir);
 }
