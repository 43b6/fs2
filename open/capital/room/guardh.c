// Room: /obj/guardh
//#define SOL1 "/open/capital/npc/Wsoldier"
//#define SOL2 "/open/capital/npc/Wsoldier"
//#define SOL3 "/open/capital/npc/Wsoldier"
//#define SOL4 "/open/capital/npc/Wsoldier"

inherit ROOM;
//string *order = ({"SOL1","SOL2","SOL3","SOL4"});
//object soldier;
  
void create ()
{
  set ("short", "С�㳡");
  set ("long", @LONG
�ذ���������ʯש���ƺ��Ǽ����õġ�ǰ���ж���������ӣ�����
��������ֻʯʨ�ӣ����ϻ��и�����д�Ž������������ǵĽ���������
����ط�ͳһָ�ӵġ��Ա��и������������ʹ��������õģ��ʵ۵�
�����һʱ�䴫���������ɽ�����ָ���´����˿�����󲻵á�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r47",
]));

  set("light_up", 1);
//  set("gopath", "east");

//  call_out("new_soldier",1);
  
  setup();

}
/*
void new_soldier()
{  
  soldier=new(order[random(4)]);
  if(soldier->is_fighting()==0)
  {   
    tell_room(environment(soldier),"����������ӵ����������, ��Ȼ�Ҵ�ææ���ܻؽ���������\n");
    destruct(soldier);
  }
  soldier->move(this_object());
  tell_room(this_object(),"���������Ĵ���ѽ��һ����, һλ�������Ҵҵ������߳���\n");
  call_out("around",30+random(30));
}

int around()
{
        string dir;
        dir = environment(soldier)->query("gopath");
        if(soldier->is_fighting()==0)
        {
          command("go "+dir);
          soldier->add("times");
        }
        call_out("around",random(30)+30);
        if( soldier->query("time") >= 150 )
        destruct(soldier);
}
*/