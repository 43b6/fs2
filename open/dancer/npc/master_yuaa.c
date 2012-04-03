//master_yua.c 
//cgy
//��heart beat��conjure reflection�õ�..�ĳ�temp�趨..
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string magic();
string ask_get_fdragon();

void create()
{
            set_name("�°���",({"master yuaa","yuaa"}));
            set("long","����ҹ��С�����ι���,Ҳ�����ι������������梡�\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname","��ϼ����");
            set("combat_exp",7000000);
            set("attitude","heroism");
            set("age",20);
            set("str", 38);
            set("cor", 35);
            set("cps", 50);
            set("per", 40);
			set("adv_dancer",1);
			set("allow_hellfire",1);
            set("int", 40);
          set("kee",50000);
          set("max_kee",50000);
          set("gin",30000);
          set("max_gin",30000);
          set("atman",20000);
          set("max_atman",20000);
          set("mana",4000);
          set("max_mana",4000);
          set("force",20000);
          set("max_force",20000);
		  set("max_sen",30000);
         set("sen",30000);
            set_skill("array",60);
            set_skill("parry",60);
            set_skill("spells",50);
            set_skill("magic",130);
            set_skill("cure",60);
            set_skill("force",60);
            set_skill("literate",70);
            set_skill("move",100);
            set_skill("dodge",100);
            set_skill("sword",50);
            set_skill("unarmed",70);
            set_skill("paull-steps",130);
            set_skill("dremagic",100);
            set_skill("dreamforce",100);
            set_skill("dreamdance",100);
			set("no_poison",1);
			set("no_askgod",1);
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
        set_temp("apply/dodge",20);
		set_temp("ref_shield",1);
        set("get_dan_sp",1);
        set("/spells/reflection/level",100);
        set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
		set("/spells/hellfire/level",75);
        set("/spells/firedance/level",100);
		set("/spells/dreamcure/level",100);
        set("/spells/dreamwings/level",100);
                
        set("force_factor",30);
        setup();
        create_family("ҹ��С��",2,"����");
        carry_object("/open/dancer/obj/yuacloth.c")->wear();
        carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
//                add_money("diamond",2)

        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
                        "��֮��" :  (: ask_get_fdragon :),
        ]));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
        set_heart_beat(1);
}

void heart_beat()
{
//      object me=this_object();
        :: heart_beat();
        
        if( is_fighting() ){
                if(is_busy()){
                delete_busy();
                message_vision(HIW+"\n�°���Ц��:�붨ס��??�Ŷ�û�С�\n"+NOR,this_object());
                }
           if(random(100)>85)
		   {command("conjure hellfire");
           }
        }
        else{
		if( query("sen") < query("eff_sen") ) // 125
			command( "exert refresh" );
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }

//      return;
}



string ask_get_fdragon()
{ 
 if(this_player()->query("spells/fdragon/level"))
  return "������ѧ���ˣ���";
 if(this_player()->query("class")!="dancer")
      {
          command("stare"+this_player()->query("id"));
          return "������ô����";
      }
 this_player()->set_temp("ask_fdragon",1);
 return "��ѧ��֮��??�ȴ�Ӯ����˵��!!!";
 
}
int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        
        if(ob_id=="king's letter")
        {
            command("say ԭ���ǻ�����������...\n");
                command("sigh");
         command("say �ð�..����Ұ�������ø���������֪����...\n");
                 new("/open/dancer/obj/letter2")->move(this_player());
        this_player()->set_temp("ask_moon7",1);
        }
  return 1;
 }
string magic()
{       
        command("conjure confuse");
        command("conjure fireball");
        command("conjure reflection");
        command("conjure firedance");
        command("conjure thunder");
        command("conjure dreamwings");
        return "\n";
}
 
int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        return 1;
}
int accept_kill(object ob)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
                command("conjure reflection");
                command("conjure dreamwings");
                command("conjure confuse");
        return 1;
}
void die()
{
        object ob;
        ob=query_temp("last_damage_from");

    if( ob->query("class")=="dancer" && 
        ob->query_temp("ask_fdragon"))
        {

        tell_room(environment(ob),HIY"�°���˵:����"+ob->name()+"��ȷ���������ѧϰ��֮��!\n"NOR);
        ob->set("spells/fdragon/level",1);
        ob->set("allow_fdragon",1);
        message("system",HIM"�°�����˵�˵������ϲ"HIW""+ob->name()+""HIM"ͨ�������Ϊ"HIR"�ס����ߡ�\n"NOR,users());
        ob->set("title",HIW"��"HIR"�ס�����"HIW"��"NOR);
        }
        else   
        {
        tell_room(environment(ob),HIC"�°���˵:�벻�������书�������\n"NOR);
        }
        ::die();
}  
