inherit ROOM;
#include <ansi.h>

void create ()
{
set ("short", "SWY �����ع����Դ�");
  set ("long", @LONG

���������ppl����skills��funcs�ĵط�����ע�����й���:
1.��Ҫ������skills and funcs
2.�����������ǲ�����
3.post�󾲴�������������post�߸�
4.�Ժ��ټ�

LONG);

	set("light_up",1);
	set("no_kill",1);
	set("no_fight",1);
  set("exits", ([ /* sizeof() == 2 */
		"east" : "/open/common/room/inn",
	]));

  setup();
  //call_other("/obj/board/skillswy_b","����");
}

