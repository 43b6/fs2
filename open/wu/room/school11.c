// Room: /u/d/devils/school11.c

inherit ROOM;

void create()
{
        set("short", "�ر���");
        set("long", @LONG
����һ��ֿ⣬�����������Ӱ˵���Ʒ���������ȥ�ƺ�û���κ�
���м�ֵ�Ķ���������ĵذ�ܸɾ�������һ��ֿ����ػҳ�����߽�
����һ�������۵����ӡ�
LONG
        );
        set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"school8",
]));
        set("light_up", 1);
        setup();
}
/*
void init()
{
        add_action("do_move","move");
        add_action("do_push","push");
}

int do_move(string str)
{
        if(!str || str != "box")
                return notify_fail("��Ҫ�ƶ�ʲô?\n");
        else if(!query_temp("box_moved")) {
                set_temp("box_moved",1);
                message_vision("$N�����������Աߣ���Ȼ�����������澹Ȼ������һ�����š�\n", this_player());
        }
        else {
                delete_temp("box_moved");
                message_vision("$N�������ƻ�ԭλ��\n", this_player());
                if(query("exits/down"))
                        delete("exits/down");
        }
        return 1;
}

int do_push(string str)
{
        object ob;
        ob = this_player();

        if(!query_temp("box_moved"))
                return notify_fail("��ʲô�ƣ���Ҫ���ƺò��ã�\n");
        else if(!str || str != "door")
                return notify_fail("������ʲô?\n");
        else {
                set("exits/down",__DIR__"school12");
                message_vision("$N�����İѰ����ƿ�����ŷ���ԭ����һ�����µĽ��ݡ�\n", ob);
                call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"���˴򿪵İ����ֻ������Զ�����������\n");
}
*/
