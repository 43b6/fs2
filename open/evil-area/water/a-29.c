inherit "/std/room/shop";

void create ()
{
        set("short","·��̯");
	set("long", @LONG
һ��С�͵�̯��������һ�ԣ�������������Щ��Ʒ�����ƺ�����
̫����Ȥ...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west" : __DIR__"a-12",
]));
setup();
}
