#include <ansi.h>
#include <mudlib.h>
inherit ROOM;
int do_list();
int do_trade(string);
void create() {
set("short","�������");
set("long",@LONG
�������������ӵ�һ�ǣ��и�������վ���⣬Ϊ�������̵Ĵ���
����˵�������������Ϊ��Ⱥ׼��ʳ��㿴��������Ⱥ��Ĺ�ϵ��
������ܣ�������Ը���Ҫƥ��������ɡ�
LONG);
  set("exits",([ /* sizeof() == 1 */
  "center" : __DIR__"wolf09.c",
]));
  set("objects",([ /* sizeof() == 1 */
  "/open/badman/ride/rider.c" : 1,
]));
  set("light_up", 1);
        set("no_kill", 1);
set("no_fight", 1);
        set("no_magic", 1);
        setup();
}
void init() {
  add_action("do_trade","want");
}

int do_trade(string str) {
  int exp;
  object me,wolf;
  me=this_player();
  exp=me->query("combat_exp",1);
  if(me->query_temp("marks/have_wolf",1))
  return notify_fail("[1;33m���Ǹ�������һƥ����[0m\n");
  if (me->query("marks/ride_wolf")!=1)
  return notify_fail("[1;33m��Ȼ������������������Ȩ��ݹ��ү�İ���[0m\n");
  if (exp<350000)
  return notify_fail("[1;33m��Ҫ��ҿ���̫�аɣ���ȥ�����ɣ�[0m\n");
  new("/open/badman/ride/r_wolf.c")->move(environment(me));
  me->set_temp("marks/have_wolf",1);
  message_vision("[1;37m���ϴ���Ⱥ������һֻ��������[0m\n",me);
  return notify_fail("[1;32m���Ǿͽ���������Ҫ�ú��չ˰���[0m\n");
}
