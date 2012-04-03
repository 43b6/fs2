#include <room.h>
inherit ROOM;

void create()
{
        set("short", "����");
        set("long", @LONG
�ӱ��ƽ�ʰ�����ϣ���������һ���޴�ĳǳ��ſڣ��������ǳ�����
�������˴�Լ���������ǰ�ĳ���Ҳ����Ŀ�ɿڴ������ȳ��ſ��Լʮ
�幫�ߣ��߶�Լ��ʮ���ߣ��ŵ����Ը���һ����ֵ�ʯ�� (statue) ����
��һ·�����Ľ����Լ���ǰ�ĳǳأ�����Χ������ãһƬ��һ��ʧ����
��ˤ���ٳ�֮�µ�ƽԭ��
LONG
        );
        set("exits", ([
           "north": __DIR__"n5",
]));
        set("outdoors",1);
        set("objects", ([
]));
        set("item_desc", ([
        "statue":"��ֵĵ�̣��������������˼������ұ�ʯ����ؿ��и����εİ���(section)��\n",
        "section":"һ�������εİ��ݿ飬����������Ƕ��Щ��ô��\n",
        ]) );

        setup();
}

void check_trigger()
{
        object room;
        if( (int)query("door_open")==1
        &&      !query("exits/south") ) {
                message("vision", "\n���ź������죬���֮�ǵĴ��Ŵ����ˡ�\n",this_object());
                set("exits/south", __DIR__"land_square");
                if( room = find_object(__DIR__"land_square") ) {
                        room->set("exits/north",__DIR__"land_gate");
                message("vision", "\n���ź������죬���֮�ǵĴ��Ŵ����ˡ�\n",room);
                }
                delete("door_open");
                call_out("close_passage", 10);
        }
}

void close_passage()
{
        object room;

        if( !query("exits/south") ) return;
        message("vision", "\n���ź������죬���֮���Ĵ��Ź������ˡ�\n",this_object() ); 
        if( room = find_object(__DIR__"land_square") ) {
                room->delete("exits/north",__DIR__"land_gate");
        message("vision", "\n���ź������죬���֮�ǵĴ��Ź������ˡ�\n",room);
        }
        delete("exits/south");
}

void reset()
{
        ::reset();
        delete("door_open");
}

void init()
{
        add_action("do_insert", "insert");
}

int do_insert(string arg)
{
        string dir;
        object medal;
        medal = (present("dragon-medal",this_player()));

   if ( arg=="medal" || arg=="dragon-medal" ){
        if(present("dragon-medal",this_player())){
        message_vision("����һ����$N�����ϵ�����Ƕ��ʯ��\n",this_player());
        add("door_open",1);
        check_trigger();
        return 1;
        }
        write("���뽫ʲô����ʯ����\n",this_player());
        return 1;
        }
        return 0;
}

