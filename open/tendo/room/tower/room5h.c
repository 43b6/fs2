#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
          object ob;
           ob=this_player();
          set("short","����������");
        set("outdoors", 1);
       set("long", @LONG
�Ĵ���ɭɭ�ģ�������������һ�ɲ�Ѱ������Ϣ�������������
�Ļ��Ҳ�Ե�ʮ�ֵİ����������ĳ���ʹ���Ӳ�������һ�ɺ��ⲻ��
��Ȼ������������һֱ�ڽ����ͷ����Ҫ������ǰ����....�����
�ǰ�������������ۣ�������Ϳ����뿪����������
LONG);
        set("exits", ([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"west":__DIR__"room5c",
	"east":__DIR__"room5b",
        ]) );
	set("objects",([
]));
        set("no_transmit",1);
          setup();
}
void init()
{
	add_action("do_search","search");
}
int do_search(string str)
{
	if(str!="eye") return 0;
	message_vision(
	"$N�����������ң�ͻȻ��������ʯ��ʹ���۴��˿�����\n",this_player());
	set("exits",([
	"north":__DIR__"room5",
	"south":__DIR__"room5b",
	"east":__DIR__"room5b",
	"west":__DIR__"room5c",
	"out":__DIR__"road1",
	]));
	return 1;
}


