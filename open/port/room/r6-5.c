// Room: /open/gblade/port/room/p1-1.c
inherit ROOM;

void create ()
{
	set("short","�����Ӱ칫��");
  set ("long", @LONG
�����������Ӷ�ͷ�칫�ĵط� . �����󷽹��˸����͵��Ҷ� 
 , д�� [��������] �ĸ����� . �����ӳ�����ʮ����ǰ������
�� , ����֮ʱ , ���Ÿۿڰ�ȫ��ʹ�� , �����γɹ��Ļ�����
�������� . ����ǰ��͢�ڸ۱߽���ˮ�� , �����ӴӴ�������ˮ
���ܶ��� , ����ά�ַ��ָ۵��ΰ� .

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
	"north" : "/open/port/room/r6-3",
]));
	set("objects",([
	"/open/port/npc/leader":1,
	]));

  setup();
}
