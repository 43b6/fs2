inherit ROOM ;

#include <ansi.h>
										
void create ()
{
  set ("short", "�ţ�Ʒ�ܹ���");
  set ("long", @LONG
���ǹ���С�龭Ӫ�Ĺ����������� Acelan �� Anmy �ȴ���ĳ�˧
����С���Ա����Ĥ�ݡ�ɢ��ģţѶ���һ�أ����߰��㡣��������
���˼����ʾ�ơ�
    ��ʾ����ע���ˡ� ����������� : help weapon_rule ��
		  �� ����������� : help armor_rule ��

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"entrance",
]));
  set("no_fight", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/robot9-1" : 1,
]));
  set("no_magic", 1);

  setup();
  call_other("/obj/board/eq_b", "???");
}








