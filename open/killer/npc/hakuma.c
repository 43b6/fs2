#include <ansi.h>
string ask_me(object who);
string do_mention(object who);
inherit NPC;
void do_specialatt();
void do_specialatt2();
void do_specialatt3();
void create()
{
	set_name("����", ({ "akuma"}) );
	set("gender", "����" );
        set("age",35);
        set("str",50+random(30));
        set("cps",33+random(20));
        set("cor",36+random(30));
        set("per",39+random(30));
        set("int",31+random(30));
        set("spi",30+random(30));
        set("con",36+random(30));
        set("kar",30+random(40));
	set("long","��ò���ֿ�, Ӣͦ����, �ĸ�����������,\n"+
	"�����ϴ��ɽ����ŵĹ��ŵ���, Ҳ����֣ʿ����ʦ��.\n");
        set("force",5000);
        set("max_kee",9000);
        set("kee",9000);
        set_skill("literate",10);
        set_skill("shasword",130);
        set_skill("shaforce",100);
        set_skill("sha-array",140);
        map_skill("array","sha-array");
        set_skill("sha-steps",100);
        set("max_force",5000);
        set_skill("array",120);
        set_skill("move",150);
        set_skill("force",100);
        set_skill("dodge",100);
        set_skill("parry",150);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",190);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",140);
        set_skill("shasword",190);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set_skill("cure",100);
        set("force_factor",50);
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
        (:exert_function,"swordkee":),
        (: do_specialatt3 :),
        }));  
        set("chat_chance",90);
 set("chat_msg", ({
                "��о������ǿ��ѹ������ .\n",
		"����а���۵����� . \n",
		"������������ԼԼ��ð����һ�ɽ�Ƶ��� .\n",
                "���������ѹס����Ľ� ..�ƺ�����������ô ..\n",
	}) );  
	set("inquiry", ([
		"֣ʿ��": "������ʦ�� .\n",
                "bigcat" : "��..��...�� ...ʦ�� ..\n",
                "������ǿ����" : "��һ�����˭��ǿ ..",
		"����": (: ask_me :),
		"���ŵ���": "����ʦ�����һ������ ..������ ..",
                "�޾����" : "ʦ������ǰ�Ҵ�Ӧ�������˼� ..�����׶��� ..",
	]) );
        
        set("combat_exp", 900000+random(900000));
        set("attitude", "heroism");
        set("title","��ʿ");
	setup();
        add_money("silver",4);
        carry_object("/u/u/urd/obj/firerobe.c")->wear();
	carry_object("/u/u/urd/obj/hasword.c")->wield();
}

string ask_me(object who)
{
        set_name("а����" , ({"akuma"}));
        set("id","evil akuma");
        set("chat_chance_combat", 190),
	set("chat_msg_combat", ({
                (: do_specialatt2 :),
                "�������˵�� : ������ ...\n",
                (: exert_function,"swordkee" :),
	        "����ȵ� : ������ !�þ�û���˸������ҽ���������!\n",
	        (: do_specialatt3 :),
	        "�������˵�� : С�� ,�Կ��ҵ��³�ֻ������· ..��......�� !\n",
                "����ȫ��ɢ����һ�����˵����� !\n",
                (: do_specialatt :),
                "�����Ц�� : ������Ҫ����ɱһ�� !\n",
	                       })); 
        kill_ob(this_player()); 
        set("inquiry", ([
                "bigcat" : (: do_mention :)
             ]));  
	message("vision",
		HIY " \n"
		"��������͸��һ�ɹ���ĺ�� .\n\n\n"
		"���������˵�� : ���� ..���ڻ�����������ͳ�Ľ��� ..\n"
                "����˵�� : �þ�û��ɱ���� ...�ҿɿ��Ʋ�ס�� ..\n\n"
                "���������ĳ���˱���ĺ��� ..һ��Ѫ�콣��ĺ��� .\n"
		,environment(), this_object() );
        set("attitude","aggressive");
	set("pursuer", 1);
        set("force", 9000);
        set("max_force", 9000);
	set("combat_exp", 1000000+random(1000000));
        set("revealed", 1);
       message("vision","�������ֳ���һָ ..��������ԼԼ��Ʈ����һ����\n"
           "��ɢȥʱ ...��������ж���һ���ɽ�"+HIC" ��������"NOR+"\n",
      environment(), this_object());
        command("unwield sword");
        carry_object("/u/u/urd/obj/testsword.c")->wield();
        return HIC"����������!\n"NOR;
	 
 }
void do_specialatt()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        �����е� : �����ɽ�֮���� !������ !
        \n" NOR ,one);
        message_vision( " 
        ����ƽ�ٽ��ȵ� :\n\n"+HIR"                         ***"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"ն"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"*** "NOR+"\n",one);
        message_vision(HIC"
        �����纣�˰�ķɹ��� !\n"NOR,one);
        message_vision(RED"
        $Nȫ���Ѫ�ܶ������������� !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",200+random(300));
         COMBAT_D->report_status(one);
return ;
}
void do_specialatt2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        �����е� : �����ɽ�֮���� !������ !
        \n" NOR ,one);
        message_vision( "
        ����б�ٽ��ȵ� :\n\n"+HIR"                         ***"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"ѽ"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"
        ��ֻ������ǰһƬ��׽���֮�� !\n"NOR,one);
        message_vision(RED"
        $Nȫ�����²��������������޿е��˵Ĵ�С���ȵ��˿� !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",200+random(300));
         COMBAT_D->report_status(one);
return ;
}
void do_specialatt3()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	�������� : �����ɽ�֮���� !������ !
	\n\n" NOR,one);
	message_vision("						
	����Ѹ�ٵ�������ǰ�Ŀ���һ�� !����񿴵���ô�����ӽ���������Ƶ� !\n\n"
	"�㿴�������ǰ���׳�������ô���� !\n"
	,one);
	message_vision(HIR"һ������Ȫ���Ѫ$N���ϲ�ͣ����� !!\n\n"NOR
	               HIY"�Ǹ��ٶȼ���Ķ�����Ȼ��ͣ���Ը�������ҧ$N������!!\n"NOR
	               "һ���ٶȼ����"+HIW" ���� "NOR+"��$N��߲��ϵķ����� !! ҧ�Ų��ſ�����$N!
	\n"NOR,one);
	one->receive_wound("kee",50+random(100));
	one->apply_condition("bleeding",10);
	one->start_busy(3);
	COMBAT_D->report_status(one);
return ;
}
string do_mention(object who)
{ 
      /*
        object *me,one;
        int i;
        me = this_player()->query_enemy();
        i = sizeof(me);
        one = enemy[random(i)]; 
        */
           if( this_player()->query_temp("passkill",1) )
           {
           message_vision("�����е� : ����һ���㻹������ !��������!\n",this_player());
           set("attitude","aggressive");
           command("follow "+this_player()->name());
           kill_ob(this_player()); 
           }
	   else
           {
     message_vision("�������\��˵��: ʦ�� ,���Ӵ���..\n",this_player());

           set("attitude", "heroism");
           command("surrender");
           command("follow none");
           this_player()->set_temp("passkill",1);
           }
	return HIC"........��...\n"NOR;
}
void die()
{
	object *me,one;
        int i;
        me = this_player()->query_enemy();
        i = sizeof(me);
        one = enemy[random(i)];
        one->set("sp_title","���µ�һ");
        message_vision(HIR"
  	��ǿ�Ľ��ͺ�������!\n"NOR,
                one);
 	message("system",HIY"
 	��ǿ�Ľ��ͺ���"+one->name()+"���� !\n\n"NOR,users());
 	message("system",HIY"
 	�ڴ����� "+one->name()+"��������ǿ !!���ֵĿ���������!!\n\n"NOR,users());
return ::die();
}
	                
