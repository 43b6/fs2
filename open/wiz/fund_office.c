// Room: /open/wiz/fund_office.c

inherit ROOM;

void create ()
{
  set ("short", "�칫��");
  set ("long", @LONG
	���������fund�İ칫�ң�ר��������ʦ��
	post�й�skills and quest ������Կ�����
	��ר�ĵ���ˡ�
	�����뿴 help skill_rules
	�����뿴 help quest_rules
	ְҵ�뿴 help class_attr
	ǿ���뿴 help mob_set


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : "/open/wiz/entrance",
]));

  set("no_fight", 1);
  set("no_magic", 1);

  setup();
  call_other("/obj/board/skill_b", "???");
}
