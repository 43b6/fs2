inherit ROOM;

void create ()
{
  set ("short", "С��");
  set ("long", @LONG
һ����Ⱦ��С���� ,���������ƵļҾ� ,������¯����������
�� ,����������һ�ֳ��ѳ��׵ĸо� ,һ�е���»���� ,������
�ﶼ�·��Ϊ��ĺ���� .....�����Ǹ����ŵ����� ,�������Ǹ�
���ˡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room38",
]));
   set("objects", ([ /* sizeof() == 1 */
   "/open/poison/npc/batking2.c" : 1,
 ]));

  setup();
}
