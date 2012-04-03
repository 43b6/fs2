#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("��һ��",({"master blademan","master","blademan"}));
        set("long","һ�����������ı��ʹ󺺣�Ϊ���µ���֮�ס�\n");
        set("gender","����");
        set("class","blademan");
        set("nickname","��Ե�");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("guild_master",1);
        set("age",37);
        set("title","���͹������");
        set("str", 60);
        set("cor", 40);
        set("cps", 30);
        set("per", 24);
        set("int", 42);
        set("force",2000);
        set("max_force",2000);
        set_skill("move",60);
        set_skill("force",90);
        set_skill("dodge",60);
        set_skill("parry",90);
        set_skill("literate",60);
        set_skill("blade",120);
        set("force_factor",15);
        setup();
        carry_object("/daemon/class/blademan/obj/nine-blade")->wield();
        add_money("gold",10);
}

void init()
{
        add_action("do_join","join");
}
int do_join()
        {
        if(this_player()->query("class")=="blademan")
        return notify_fail("���Ѿ��ǵ��͆� !\n");
        if(this_player()->query("class"))
        return notify_fail("���Ѿ��������������ˡ�\n");
        this_player()->set("class","blademan");
        message("system",HIY "��һ��������Ц��\n
���ǵ����ֶ��˸�������" +this_player()->name()+ "����\n
��λ����ǣ�һ��ӭ���ɣ�\n\n"NOR,users());
        command("smile "+this_player()->query("id"));
        command("say ϣ�����ܺú�Ŭ����׳���ҵ������ݣ�\n");
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
	  new("/open/sky/obj10/palm_yin")->move(environment(winner));
	  message_vision(HIM"\n����һ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/palm_yin",sprintf("%s(%s) ����һ������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/palm_yin")->move(environment(winner));
	  message_vision(HIM"\n����һ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/palm_yin",sprintf("%s(%s) ����һ������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

