// Room: /open/hall/h_room12.c

inherit ROOM;

void create()
{
        set("short", "������᷿");
        set("long", @LONG
������һ����ͨ�̣��������ܹ�װ�����ġ���ʮ�ˡ��������ಶ
������ͷ������ȥ��һ������ॵ������ӣ������й��롮�硯���ǵ���
��!!
LONG );

        set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"way3",
]));

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/soldier" : 3,
]) );
        setup();
}
