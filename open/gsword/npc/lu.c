#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int ask_yan();
void do_busy();
int done=0;
void do_heal();
object ob;
void create()
{
        set_name("½����", ({ "lu lin sen", "lu" }) );
        set("long","һ�����Լ��ʮ����Ĵ������ߣ���֣ʿ����ʦ�ܣ��ɽ��ɵ���
�����ӡ��������߽���ʱ������һ��ն����ħ������δ�����
��֮����Ϊ����į������Ϊ�����޵��ּ�į��֮̾�⡣\n");
        set("gender", "����" );
        set("inquiry",([
             "�ſ�":"�~~~~����˵����¥�Ǹ��ſ�ѽ....��֪����...��Ϊ����ǰ
            �����ɽ��ɵ���",
             "��ӡ��":"�ſ����������Ϊ�ô���ӡ�����ԲŻᱻ���ʦ��..������
            ����ʦ��Ҳ��ͬ������....������ɽ�µ��Ǹ��ƹ����
            ����ʦ�֡�",
             "��ӡ���ĵ���":"���ǵ�������ʦүһ���ս��ħ����λ����..Ҳ����
            ��Ϊ����..�����ھ���������λ�ĵ�����Ϊ��ӡ��",
             "����":"����ʦү���ɽ����������ħ֮��...Ϊ���ӷ�ӡ��������..
            �����ڵ����ϸ���һ��ȱ��...����\������ľ��Ǵ�˵�е�
            ����������....",
             "����������":"���ǵ�����ʦ���ɽ�����Ϊ����...�뵽����ʦ������
            ���ɽ�����������������...�����ڵ�����....��Ŀǰ���ڽ�
            ���Ͽ�����...ֻ������ԭ����������������Ʒ..����Ҫ����ӡ
            ����Ҫ��������Ʒ�ſ���..",
            "������" : (: ask_yan :),
             "������":"��ѽ.....������ʮ��ǰ�Ĵ�ʦ...��ֻ֪����Щ��...
            �����ľ͸���һ��..һ����֪.... ",
                      ]));
        set("class","swordsman");
        set("nickname","��į��");
        set("age", 71);
        set("family/family_name","�ɽ���");
        set("combat_exp",1000000);
                set("str", 54);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        create_family("�ɽ���",3,"����"); 
        set_skill("shasword",100);
        set("dragon-sword",1);
	map_skill("sword","shasword");
        set_skill("shaforce",70);
        set_skill("sha-steps",80);
        set("max_force",3000);
        set("force",3000);
        set("max_gin",6000);
	set("force_factor",10);
        set("gin",6000);
        set("max_kee",6000);
	set("kee",6000);
        set("max_sen",6000);
	set("sen",6000);
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        (: perform_action,"sword.sha_kee" :)
        }));
        set("max_mana",200);
        set("mana",200);
        set_skill("force",60);
        set_skill("dodge",70);
        map_skill("dodge","sha-steps");
        set_skill("sword",100);
        map_skill("force","shaforce"); 
        set_skill("unarmed",90);
        setup();
        carry_object("/open/gsword/obj/silver_sword.c")->wield();
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/pill2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        carry_object("/open/common/obj/plaster2");
        
        }
  void do_heal()
 {
   if(done <5 )
   if(this_object()->query("kee") < 0.2*this_object()->query("max_kee") )
   {
    command("eat pill");
    message_vision("½�����ɻ����ͳ�ҩ��Ĩ���˿���\n",this_object());
    command("apply plaster");
    done++;
    }
  }
                                                             
int ask_yan()
{
  object me;
  me=this_player();
  if( me->query("fyan")==1)
{
command("say ��˵������ʦ�尢������Ѫħ�����ѣ����Ѿ�ǰ�����Ÿ���ȥ����Ԯ����������˵�ᵽһ���徲�ĵط�ȥ��ϰ��ǿ�Ľ���������������..�Ҿ��޷���֪�ˡ�\n ");
me->set("fyan",2);
}
else if (me->query("fyan")==7)
{
command("say ������ʦ�����������..���������������ĵط�ȥ��..��˵���ں�ɽ..��������û��֪������~\n");
me->set("fyan",8);
}
  else
    {
   command("say ��������ʲô��ȥ����Ӧ�������°ɡ�\n");
    }
     return 1;
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/starry_diamond")->move(environment(winner));
	  message_vision(HIM"\n��½���������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/starry_diamond",sprintf("%s(%s) ��½�����������ǿ�֮ҹ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/starry_diamond")->move(environment(winner));
	  message_vision(HIM"\n��½���������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/prairie_diamond",sprintf("%s(%s) ��½�����������ǿ�֮ҹ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}