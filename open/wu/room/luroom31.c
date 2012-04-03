// Room: /open/wu/room/luroom31.c
// ��ɽ��Ժ�鷿
inherit ROOM;
void create ()
{
  set ("short", "�ξ�");
  set ("long", @LONG
��������������ң�����ʮ�ּ򵥣�ֻ��һ�Ŵ���һЩ�򵥼Ҿ㿴
�Ƶ�����ȴ������������˵������Ϊ�����˳���˯��͵Ϯ��������
�������أ�û�±��Ҵ����������ڷ�����
LONG);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"luroom32",
]));
  set("light_up", 1);
  setup();
}
void init()
{
        add_action("do_move","move");
        add_action("do_push","push");
}

int do_move(string str)
{
        if(!str || str != "����")
                return notify_fail("��Ҫ�ƶ�ʲô?\n");
        else if(!query_temp("box_moved")) {
                set_temp("box_moved",1);
                message_vision("$N�ƶ���ľ������ʱ��Ȼ����ľ�����������ų�����һ������(button)��\n", this_player());
        }
        else {
                delete_temp("box_moved");
                message_vision("$N��ľ���ƻ�ԭλ��\n", this_player());
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
                return notify_fail("��ʲô������Ҫ�Ұ��ò��ã�\n");
        else if(!str || str != "button")
                return notify_fail("���ڰ�����ѽ?\n");
        else {
                set("exits/down","/open/wu/room/luroom1");
                message_vision("$N�����۰��£��¡��¡��ذ��һ�����µĽ��ݡ�\n", ob);
                call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"���˴򿪵ĵذ��ֻ������Զ�����������\n");
}
