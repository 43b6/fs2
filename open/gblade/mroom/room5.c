inherit ROOM;
void create ()
{
  set ("short", "������");
  set ("long", @LONG

����һ���տ����ɾ��ĵ����ң��������������һ������(box)��

LONG);

set("item_desc", ([ /* sizeof() == 1 */
"box" : "�����������š���ֹ�������ķ�����
",
]));

set("search_desc", ([ /* sizeof() == 1 */
"box" : "�㷢�����ӹֵֹģ��ƺ������ƶ���
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room3.c",
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
if(!str || str != "box")
return notify_fail("��Ҫ�ƶ�ʲô?\n");
if(this_player()->query("family/family_name")=="ѩ����"||this_player()->query("family/family_name")=="ħ����"||
this_player()->query("family/family_name")=="ħ��Ī��") {
if(this_player()->query("combat_exp")>300000) {
if(!query_temp("box_moved")) {
set_temp("box_moved",1);
message_vision("$N�ƶ������ӣ������������澹Ȼ������һ����ť(button)��\n",this_player());
    return 1;
        }
        else {
                delete_temp("box_moved");
                message_vision("$N�������ƻ�ԭλ��\n", this_player());
                if(query("exits/down"))
                  delete("exits/down");
    return 1;
        }
        }
message_vision("��ľ���ֵ�����ƶ����ӡ�\n",this_player());
        return 1;
        }
message_vision("�㲻��ѩ�Ի��ŵ��ӣ����Բ����ƶ����ӡ�\n",this_player());
        return 1;
}

int do_push(string str)
{
        object ob;
        ob = this_player();
        if(!query_temp("box_moved"))
                return notify_fail("��ʲôѽ��\n");
        else if(!str || str != "button")
                return notify_fail("���ڰ�����ѽ��\n");
        else {
                set("exits/down","/open/gblade/room/m-room1");
      message_vision("$N����ťѹ�£��¡��¡��ذ��һ�����µĽ��ݡ�\n",ob);
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
