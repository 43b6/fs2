// Room: /u/m/moner/room/r2.c 
inherit ROOM;
 
void create ()
{
  set ("short", "ħ����");
  set ("long", @LONG

������ħ��������Χ��һ̤��������ܵ�ɱ��ͻȻŨ����������һ
˫˫����ɱ�����۾����������㡣�㶨�˶����ע�⵽����������
�ܣ����������ŵ��ۣ����䴦����һ�Ѷѵĺ��ǣ�ʹ�㲻�����ݡ�
����ϸһ�������ʯ�����ƺ�����(paper)��

LONG);
set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"r2.c",
  "enter" : __DIR__"r4.c",
]));
set("item_desc",([
"paper":"ħ�����Թ��������ļ������������ƶ��ɣ������ļ����е�\n"+
        "������Σ�ա�\n"+
        "                                            ��������\n",
]));
set("objects",([
"/daemon/class/blademan/npc/corpse.c":2,
]));
  setup();
  replace_program(ROOM);
}
