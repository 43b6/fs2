inherit ROOM;
void create()
{
   set ("short","С��");
  set ("long",@LONG
�������� ,����ֻ����Ϣ����Ӧ������ .���ܼž���������Ϣ����
�ȸղ���ֻΧ����ĸо������˿־� .������һ��С�յ� ,����������
һ����Ƶ����� .
LONG);

  set("outdoors","/open/badman");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"wolf15.c",
  "south" : __DIR__"wolf10.c",
  "west" : __DIR__"wolf13.c",
  "east" : __DIR__"wolf14.c",
]));

  setup();
}
