inherit ROOM;
#include <ansi.h>
#include <room.msg>

void create () {
        set ("short","�������");
        set ("long",
        (: print_room_msg :)
        );
    
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        ]));


        setup();
}
void init()
{	
  call_out("do_exit",1,this_player()); 
}
void do_exit(object me)
{      
       int per;
      set("exits", ([ /* sizeof() == 1 */
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        "����" : __DIR__"room46",
        ]));
      per=me->query("per");
      if(me->query("setgift-mk")==1)
        per=me->query("setgift/per");                    
      if(per>30)
        per=30;
      switch(random(100))
      {
      	case 0..24:
      	if(100<(random(100)+me->query("per")))
        {
          set("exits/����", __DIR__"room51");
          set("exits/����", __DIR__"tran1");
          set("exits/����", __DIR__"tran2");
          set("exits/����", __DIR__"tran3");
        }   
        break;
        
        case 25..49:
      	if(100<(random(100)+me->query("per")))
        {
          set("exits/����", __DIR__"room51");
          set("exits/����", __DIR__"tran1");
          set("exits/����", __DIR__"tran2");
          set("exits/����", __DIR__"tran3");
        }
        break;
        
        case 50..74:
      	if(100<(random(100)+me->query("per")))
        {
          set("exits/����", __DIR__"room51");
          set("exits/����", __DIR__"tran1");
          set("exits/����", __DIR__"tran2");
          set("exits/����", __DIR__"tran3");
        }
        break;
        
        case 75..100:
      	if(100<(random(100)+me->query("per")))
        {
          set("exits/����", __DIR__"room51");
          set("exits/����", __DIR__"tran1");
          set("exits/����", __DIR__"tran2");
          set("exits/����", __DIR__"tran3");
        }
        break;
        }
      me->set_temp("exit_ok",1);
}
int valid_leave(object who, string dir)
{
        int i;
        object *inv;
        if (dir == "����" || dir == "����" || dir == "����" || dir == "����")
        {
                if(!who->query_temp("exit_ok",1))
                  return notify_fail(HIY"����������ڱ任���Σ�����ò�Ҫ�������!!\n"NOR);     
                who->delete_temp("exit_ok",1);
                inv = all_inventory(environment(who));
                for(i=0;i<sizeof(inv);i++)
                {
                  if(userp(inv[i]) || living(inv[i]) || inv[i]->query("capacity")) continue;
                  destruct(inv[i]);
                }
        }
        return :: valid_leave(who,dir);        
}
