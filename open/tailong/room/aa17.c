inherit ROOM;

void create ()
{
  set ("short", "Ĳ��Ժ��");
  set ("long", @LONG
������������µ���ѧ�ص�Ĳ��Ժ��,�����µĸ�ɮ�����ڴ�Ǳ����
ѧ����,���Ĳ��ԺҲ�ͳ�Ϊ�����¶����˵�������֮һ,����������λ
�����µ��ϼ���ɮ�ڴ˰��ء�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"aa18",
  "east" : __DIR__"aa16",
]));
  set("objects", ([ /* sizeof() == 1 */
"/open/tailong/npc/monkf5.c":2,
]));

  setup();
  replace_program(ROOM);
}
