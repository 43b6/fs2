inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG

���ŵ��Ϸ���һ��ľ����ͷ�����Ļ�д�š���������������
�������㣬�������ܳ������������ֲ�΢�紵����������֮�ڵ�����
һ�����ĵ����ա�������վ��һΪ�Ӵ�Ա��Ц�����������㡣

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/r/rence/npc/gmob4.c" : 1,
]));
  set("outdoors", "/u/r/rence");
  set("exits", ([ /* sizeof() == 1 */
	"out" : "/u/r/rence/room/road",
]));

  setup();
}
 
