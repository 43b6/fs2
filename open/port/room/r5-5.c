// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�滧");
  set ("long", @LONG
����һ���ª��ƽ�� , ���ӽ��򵥵İ���һЩ�Ҿ� . ǽ��
ʮ�ֵ��ƾ� , ��ʱ���е����Ŀ��� , ����������ڸ����ķ���
���ھ�Ȼ�������ַ��� , ���������������������Ц�� , �ƺ�
���ı��κ��˶������� !

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"south" : "/open/port/room/r5-3",
]));
	set("objects",([
	"/open/port/npc/boy":1,
	"/open/port/npc/wangma":1,
	]));

  setup();
}
