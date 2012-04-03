inherit NPC;
inherit F_MASTER;
#include <ansi.h>

void create()
{
        set_name("�����", ({ "zhu howang", "zhu", "wang"}));
        set("title", "���ö���ͷ");
        set("nickname","[33m��ţʦ[0m");
        set("gender", "����" );
        set("age", 46);
        set("str", 50);
        set("cor", 50);
        set("cps", 50);
        set("int", 50);
        set("spi", 50);
        set("kar", 50);
        set("per", 50);
        set("con", 50);

        set("max_atman", 5000);
        set("max_force", 5000);
        set("max_mana", 5000);
        set("atman", 5000);
        set("force", 5000);
        set("mana", 5000);
        set("force_factor", 5);

        set("long", @LONG
    һ����׳�����ӣ�������¤ɽ�ɵĵ��ӡ���˵����Ϊ�˾��ˣ�
һȭ����һͷ��ţ����֮���˸�����ţʦ�������ţ�������������
�Էŵ����ʶ�һЩ�����ϵ�ϸ�ڲ��Ǻ�ע�أ�����ʹ���ߵ����ܲ�
�ˡ�
LONG);

        set("combat_exp", 600000);
        set("score", 20000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
        "��ȭ!!С����!!\n",
        "һ���߷��������˵�!!\n"
        }) );

        set_skill("unarmed", 60);
        set_skill("force", 100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("sword", 100);
        set_skill("literate", 90);

        set("inquiry", ([
          "¤ɽ��" : "������¤ɽȭม�����˵Ҳ�գ�������",
	  "thief"  : "��������ϧ�����α���, ��Ȼ�ϴ��Ҿ�ץ���Ǵ����",
        ]) );

        setup();
   //   carry_object(__DIR__"obj/dragon_armor")->wear();
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

	if( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {
	  new("/open/sky/obj11/red-crystal")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/red_crystal",sprintf("%s(%s) ������������˺�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj11/red-crystal")->move(environment(winner));
	  message_vision(HIM"\n������������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/red_crystal",sprintf("%s(%s) ������������˺�ɫ�⾧�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}