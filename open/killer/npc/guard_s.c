//���������������ˣ������������ӣ�����ɱ�˹���
#include <ansi.h>
#include "/open/open.h"
inherit NPC;

object ob1=this_object();
object ob2;
int have_say;

void create()
{
  object ob;
set_name("������", ({"shi-tin","tin"}));
set("long","��Ȼ��Ů�ԣ���ɱ�С����Ŷ���ܵ���ɱ�������������ǲ�������\n");
set("gender","Ů��");
        set("class","killer");
        set("combat_exp",200000);
        set("attitude","heroism");
        set("age",26);
        set("title","ɱ��������");
        set("max_kee",2500);
        set("kee",2500); 
        set("max_force",1200);
        set("force",1200);
        set("force_factor",3);

        set_skill("throwing", 40);
        set_skill("blackforce", 60);
        set_skill("dodge", 120);
        set_skill("force",50);
        set_skill("move", 120);
        set_skill("parry", 120);
        set_skill("shade-steps",120);
        set_skill("rain-throwing",120);
        map_skill("force","blackforce");
        map_skill("throwing","rain-throwings");
        map_skill("dodge","shade-steps");
        map_skill("move","shade-steps");
setup();
add_money("gold",3);
 ob2=carry_object("/open/killer/obj/lustar.c");
 ob2->add_amount(200);
 ob2->wiled();
 carry_object("/open/killer/weapon/k_cloth2.c")->wear();
 carry_object("/open/killer/weapon/k_belt2.c")->wear();
 carry_object("/open/killer/weapon/k_arm2.c")->wear();
 carry_object("/open/killer/weapon/k_cap2.c")->wear();
carry_object("/open/killer/memory/static.c")->wear();
}

int accept_fight(object who)
{
return notify_fail("�١�����������ﵱ���ֳ���\n");
}

int accept_kill(object ob)
{
        int i,j,havekill;
        object ob1, hu_fa, *all;
        ob1 = this_object();
        add_temp("kill_me",1);
        ob->set_temp("kill_tin",1);
//        havekill=ob1->query("guard");
      
        if( !present("guard", environment(ob)) ) 
        {
          tell_room(environment(ob),HIW"\n��λͻȻ�������!!\n\n"NOR);
 //         if(!havekill)                        ���д�Ĺֵֹ��ƺ�û�����������õ�
 //              ob1->set("guard",1);
 //         else
          for(i=0;i<2;i++)
          {
            hu_fa = new("/open/killer/npc/guard");
            hu_fa->move(environment(ob));
            hu_fa->command("guard behavior_elder");
            hu_fa->command("follow "+ob->query("id"));
            hu_fa->kill_ob(ob);
          }
        }
        tell_object(this_player(),HIR "ɱ�������������ýе������������ͷ��\n" NOR);
          if(query_temp("kill_me")>5)
        {
          message_vision( HIY"\n������ͻȻɱ�����������ڳ�Χ����ȫ���Ƴ�ս��!!\n"NOR,ob1);
          set("title",MAG"��ɱ�����ڡ�"NOR); 
          set("attitude","aggressive");
          all = all_inventory( environment(ob1) );
          j=sizeof(all);
          for(i=0;i<j;i++)
          {
            if(all[i]->query("id")!="shi-tin" && all[i]->query("id")!="killer guard"
               && !all[i]->query_temp("kill_tin",1) 
               && !all[i]->is_corpse() && living(all[i]))
              all[i]->move("/open/killer/room/outr0.c");
          }
        }
        ob->delete_temp("kill_tin",1);          
        return 1;
}

void greeting(object ob)
{
  if(!ob) return ;
  if (present("five poison",ob) ) 
  {
     command("say ���ö�,�Ŷ�û��!!");
     kill_ob(ob);
   }
   if( ob->query("class")=="blademan")
    {
     command("say ���ǵ��ͣ����ǲ��ҵ�ְҵ��һ����ͷֵ���˶���Ǯ��\n");
     kill_ob(ob);
    }
}


