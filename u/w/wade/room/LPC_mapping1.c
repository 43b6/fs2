inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC ���� -- ��Ӧ -- ��");
  set ("long", @LONG
mapping �� array ʵ���Ǻ���Ҫ��������̬, ��õ��������� /feature/dbase.c
����һ���˿�����, ���� more ~wade/dbase.c ����.
�ڴ��Ȳ���˵, �����д�ġ.
LONG);

  set("exits", ([
	"back"	:	__DIR__"lpc",
  ]) );

  setup();
}
