inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
���µĿ��� ,���������� ,����һֻ����è��һ�߿������� ,һ
�ߺ���Ĵ������� ,�ٺ� ,���������������Ǹոպ� ;��������
 ,�պ��������׵����� .��а������� .ǰ����һ��С�� .....
ס��˭�� ?

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room37",
  "enter" : __DIR__"room39",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/u/h/houng/mob/bearcat.c" : 1,
]));

  setup();
}
