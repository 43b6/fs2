//master_yua.c //cgy
#include <ansi.h>
#include "/open/open.h"
string magic();
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
string *fs2000_id = ({
"sula",
"cgy",
"cyr",
"bebo",
"andylin",
});
void create()
{
            object ob;
            set_name("���۽�Ʒ����Ա",({"netgirl"}));
            set("long","���Ž�Ʒ����\n");
            set("gender","Ů��");
            set("class","dancer");
            set("nickname",".....");
            set("combat_exp",7000000);
            set("attitude","heroism");
			set("no_plan",1);
            set("age",20);
            set("str", 38);
            set("cor", 35);
            set("cps", 50);
            set("per", 40);
            set("int", 40);
          set("kee",30000);
          set("max_kee",30000);
          set("gin",16000);
          set("max_gin",16000);
          set("atman",20000);
          set("max_atman",20000);
          set("mana",4000);
          set("max_mana",4000);
          set("force",2000);
          set("max_force",2000);
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
        map_skill("magic","dremagic");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        map_skill("move","paull-steps");
        map_skill("unarmed","dreamdance");
        set_temp("apply/armor",70);
		set_temp("apply/dodge",20);
		set_temp("reflection",1);
		set("get_dan_sp",1);
		set("/spells/reflection/level",100);
		set("/spells/confuse/level",100);
        set("/spells/fireball/level",100);
        set("/spells/thunder/level",100);
        set("/spells/firedance/level",100);
        set("/spells/dreamwings/level",1);
		
        set("force_factor",30);
        setup();
        create_family("ҹ��С��",2,"����Ա");
        carry_object("/open/dancer/obj/yuaboots.c")->wear();
		carry_object("/open/dancer/obj/maple_ribbon.c")->wield();
        carry_object("/open/dancer/obj/yuawaist.c")->wear();
		add_money("diamond",2);
//      ob->set_amount(50);
        set("inquiry", ([
            "������"  : "��˵��������ɽׯׯ����������??��������Ľ��ż��Ү!!",
        ]));
		set("chat_chance",5);
        set("chat_msg",({
             "�����콱Ʒ�\n"}));
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
         (: magic :),
        }));
}
void init()
{
add_action("in_fs2000","get_fseq");
}

/*void heart_beat()
{object me=this_object();
         if( query("kee") < 0)
          me->die();
        if( is_fighting() ){
		   if(me->is_busy())
		    {me->delete_busy();
			message_vision(HIW+"\n�°���Ц��:�붨ס��??�Ŷ�û�С�\n"+NOR,me);
			}
		      if(query_temp("ref_shield")!=1)
		      command("conjure reflection");
                if( query("kee") < query("eff_kee") )
                        command("exert recover");
        }
        else{
                if( query("eff_kee") < query("max_kee") )
                        command("conjure dreamcure");
        }
        :: heart_beat();
}
*/


int in_fs2000()
{ 
string name=this_player()->query("id");
int i,j,number=sizeof(fs2000_id);
 if(!this_player()->query("get_fseq"))
  {
    for (j=0; j<number; j++)
    {
    if(fs2000_id[j] == name)
    {
  new("/data/autoload/wiz/cgy/fseq.c")->move(this_player());
  this_player()->set("get_fseq",1);
 write("������������..\n");
 write("��ȥ��..\n");
 return 1;
     }}
	 write("��û�ʸ����!!");
	 return 1;
	 }
 write("�������ù��ˣ���");
 return 1;
}
/*int accept_object(object who,object ob)
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
 */
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
 
/*int accept_fight(object ob)
{
        command("say СŮ���������Ķ�����??\n");
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        message_vision( this_object()->name()+"һ��������������ӡ�\n",ob);
        return 1;
}
*/
int accept_kill(object ob)
{
        command("say û�뵽�������۸���СŮ�ӣ����ҾͲ�������!!!\n");
		command("conjure reflection");
		command("conjure dreamwings");
		command("conjure confuse");
        return 1;
}
/* void die()
 {
   if( this_player()->query("class")=="dancer"&&this_player()->query_temp("ask_fdragon"))
     {
	  write("�°���˵:��������ȷ���������ѧϰ��֮��!\n");
      this_player()->set("spells/fdragon/level",1);
      this_player()->set("allow_fdragon",1);
	message("system",HIM"�°�����˵�˵������ϲ"HIW""+this_player()->name()+""HIM"ͨ�������Ϊ"HIR"�ס����ߡ�\n"NOR,users());
      this_player()->set("title",HIW"��"HIR"�ס�����"HIW"��"NOR);
	  }
  else   
   {
    write("�°���˵:�벻��������\���������\n"); 
    }
   ::die();
  }  
*/