// Room: /open/poison/room/path11.c
#include <ansi.h>
#include "/open/open.h"
inherit ROOM;

void create()
{
  set ("short", "Сɽ��");
  set ("long", @LONG
������һ��СС��ɽ�������ߺ��ϱߵ�ʯ���Ͼ�����ʥ
������ϸһ��������ǽ����һ�������Ե�С�״��ڣ�����
ʯ�ڽϹ⻬������ʯ������ǧ���ٿ׵ģ����⿴�����κ���
��ĵط���
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"road6",
]));
  setup();
}
void init()
{
 object me = this_player();
 if(present("stonekey",me))
        tell_object(me,HIC"����ʯ���и��������ϴ�ʯ���������������졣\n"NOR);
 add_action("do_go","go");
 add_action("do_press","press");
}
int do_go(string str)
{
  object me = this_player();
  object ob = this_object();
  if(str == "south" )
        if(me->query("family/family_name")=="ڤ��ħ��")
               {
                message_vision("$N�����ؿ�������ʯ�ţ�������롣\n",me);
                tell_room(ob,"ʯ���漴�����ϡ�\n");
                me->move(POISON_ROOM"path2");
                return 1;
               }
  if(str == "east" )
        if(present("stonekey",me))
            {
             tell_room(ob,"����ʯ�Ÿ�Ӧ����ʯ�Ľӽ���������һ���š�\n");
             message_vision("$N���Ų�æ�����˽�ȥ��\n",me);
             tell_room(ob,"���Ŵ�ʯ��ȥ��ʯ���Զ����ϡ�\n");
             me->move(POISON_ROOM"path12");
             return 1;
            }
}
int do_press(string str)
{
  object me = this_player();
  object ob = this_object();
  if(str != "fire")
        return notify_fail("���밴����?\n");
  if(!me->query("quests/poison_help"))
    {

        tell_object(me, "�����㲻���ѹ������С�Ĵ������ء�\n");
        tell_object(me, "ͻȻ�������죬��е�һ�ɺ���ע�����ڡ�\n");
	me->apply_condition("rose_poison", 3);
	return 1;
    }
  message_vision("$N��ȷ������ʯ�ſ��أ�ʯ����֮����\n",me);
  message_vision("$N���Ų�æ�����˽�ȥ��\n",me);
  message_vision("����$N�߹���ʯ���Զ����ϡ�\n", me);
  me->move(POISON_ROOM"path12");
  return 1;
}
