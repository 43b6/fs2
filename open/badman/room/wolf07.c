inherit ROOM;
void create()
{
  set ("short","��ׯ��");
  set ("long",@LONG
�����ƺ���һ��С��ׯ ,�������� ,��Ⱥ��ĸ������ ,��������
�� ,�������ȵ����������ϵ�ζ�� .���￴���������ׯΨһ�ĳ����
 ,��ȥ��һ���� .
LONG);

  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"wolf08.c",
  "southup" : __DIR__"wolf04.c",
]));

  set("objects",([ /* sizeof() == 2 */
  "/open/badman/npc/wolf02.c" : 2,
]));

  setup();
}
