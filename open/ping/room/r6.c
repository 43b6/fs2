// Room: /u/m/moner/open/room/r6.c 
inherit ROOM;
 
void create ()
{
  set ("short", "����");
  set ("long", @LONG
    �����Ƕ�ͷĿ���ŵĴ���, ������ȥ, һƬ����ɫ, ���еİ��趼��
������Ʒ�����������Ƿ���ɽկ�ڵĶ�����, ���е������װԼ���������
������ȥ��, ���ſ��㴳����, ����а���Ц��, �������ż���ô�嶯 ,
���ǿ����к�����Ļ�, ��������͸, �㲻�����˸������


LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r5.c",
]));
set("objects",([
"/open/ping/npc/5.c":1,
]));

  setup();
  replace_program(ROOM);
}
