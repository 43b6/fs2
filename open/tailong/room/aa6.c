// Room: /u/o/ookami/newarea/aa6.c 
inherit ROOM;
 
void create ()
{
  set ("short", "�����ߵ�");
  set ("long", @LONG
�߽������µ��ڲ�,������ȥ,��������װ�ε�������ۼ�ĸ�ʽ����
,��ֱ������ʹ�����,������Ҳ�ѹ�,����ÿ�궼���������,��������
Щ����޽�,�����¿�˵��ȫ����һ�����Ĵ���Ժ,ֻ����λ�ڴ����ɽ
��,���Ƕμ��ȱ����֮��,������Ų�������
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"aa5",
  "west" : __DIR__"aa7",
  "east" : __DIR__"aa8",
]));

set("objects", ([ /* sizeof() == 1 */
"/open/tailong/npc/monk2.c":1,
]));
  setup();
  replace_program(ROOM);
}
