inherit ROOM;

void create ()
{
  set ("short", "LPC ˵�� -- ���� LPC ��ʽ --");
  set("long", @LONG
LONG);

  set("exits", ([
	"mudlib": __DIR__"mudlib",
	"driver": __DIR__"driver",
	"area"	: __DIR__"area",
	"object": __DIR__"object",
	"back"	: "/u/w/wade/workroom",
  ]) );
  setup();
}
