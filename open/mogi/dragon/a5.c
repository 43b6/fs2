// Room: /u/p/poloer/dragon/a5
inherit ROOM;

void create ()
{
  set ("short", "������ǰ��");
  set ("long", @LONG
�����˹��У����ܻ谵�޹⣬ҪС�����ȵ��߲��С�ֻ����
��ǽ��ǰ�����о����Բ�ʱ�ж����߹���ż������������ֿ޺�
�������������������𺮡�
    ͻȻ��ǽ���Ϻ�����Щ����������(search)������

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"a2",
  "east" : __DIR__"a6",
  "west" : __DIR__"a4",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

void init()


{
    add_action("search_here", "search");


    add_action("do_dig","dig");
}




int search_here(string arg)


{








      tell_room(this_object(),"���Ұ��ҵ�,����ǽ���и���(hole)��������(dig)������C
");


   return 1;


}








int do_dig(string str){




if(!str || str !="hole"){
                return notify_fail("���������\n");
                           return 1;
                                 }
else{
tell_room(this_object(),"���ֶ����и�ͨ����");


                set("exits/enter",__DIR__"a11");
                set_temp("have_open",1);
                 remove_call_out("do_closed");
                  call_out("do_closed",15);
                  return 1;
}
}
void do_closed()

{

        delete_temp("have_open");
        delete("exits/enter");
        tell_room(this_object(),"��!һ��������̮�˶����ֹ�������\n");
}
