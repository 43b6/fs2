inherit ROOM;

void create ()
{
  set ("short", "���۱���");
  set ("long", @LONG
�����Ǵ��۱����������,�������ǰ��һλ��ü��Ŀ���Ϻ���
�����������еı�����,����һ���Ͱ����׵�ģ��,���ų��˾���
�벻������һ�����ָ��֡�
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"aa38",
  "south" : __DIR__"aa36",
  "north" : __DIR__"aa42",
  "east" : __DIR__"aa40",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/tailong/npc/inn.c" : 1,
]));

  setup();
  replace_program(ROOM);
}
