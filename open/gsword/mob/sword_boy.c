// guard.c

#include <ansi.h>

inherit NPC;

string ask_me(object who);
int tt=2;
int done = 0;
void create()
{        
	set_name("̰��С��ͯ", ({ "money boy", "boy" }) );
	set("gender", "����" );
	set("age", 11);
	set("str", 15);
	set("cor", 35);
	set("cps", 25);
	set("int", 15);
	set("long",
		"һλ�ɽ��ɵ�С��ͯ,���ƺ��ò���ʦ����ϲ��.\n"
		"���������Ŵ��С��,���������������.\n" );
        set("combat_exp",200);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		"С��ͯ˵: ��! ��Ǯ���.\n",
		"С��ͯ˵: ѧ��������.\n",
		"С��ͯ˵: ���Ž�����������,������ɽ������,��������.\n",
	}) );
	set("inquiry", ([
		"money": " ��..��...��Ҫ������? \n",
		"Ǯ": " ��Ǯ��ʹ����ĥ,�ѵ���û������?\n",
		"����": "���Ǳ��ŵ�����,����ò�Ҫ����!!\n",
	]) );
        set_skill("parry", 5);
         set_skill("dodge", 5);
        set_skill("shasword", 2);
        map_skill("sword","shasword");
	setup();
	add_money("coin",100);
        carry_object("/open/gsword/obj/map1");
        carry_object("/open/gsword/obj/suit")->wear();
        carry_object("/open/gsword/obj/woodsword")->wield();
}
int accept_object(object who, object ob)
{   if(done)
   { return 1; }
   else {    
       if( ob->value() < 25 )
        {    say("̰��С��ͯ˵: ����ôһ�㰡?\n");
             return 1; }
        else { if( tt  <1 )
                 {  say("С��ͯ˵: ����,׬�����Ǯ,�Ҿ͸�����һ�����ذ�!!\n" 
                        + "          ����ֻҪ�� ��ľ��ˮ�� �Ϳ���ͨ����.\n");   
                    set_name("�Ƥ��",({"urgly dog","dog"}));
                    set("inquiry", ([
                           "Ǯ": "����!!",
                                   ]));
                    set("long","һֻ��ª���Ƥ��,��������ŧ��������.");
                    set("chat_msg", ({
                           "С����ҭ:...��...��...��...\n",
                           "С������:...��...��...��...\n",
                           }));
                    message("vision",
                             HIY " ͻȻ, ̰��С��ͯ���: ������,ʦ��!! ʦ��!!\n"
                             " �����һ�����¤����̰��С��ͯ.\n"
                             HIR " ���ֱ��������,̰��С��ͯ��Ϊһֻ�� !!!\n" NOR,
                             environment(), this_object() );
                   done =1 ;          
                } else {                                   
                    say("̰��С��ͯ˵: лл����,�ٸ�һ���!!\n");
                    tt--;  }
             return 1; }
             }
}                 	

