#include <ansi.h>
string ask_me(object who);
string do_angel(object who);
string do_mention(object who);
inherit NPC;
int j=0 ,k=1;
void create()
{
        set("title","�������");
	set_name("³Э����",({"rusie lenlen","rusie"}));
	set("gender", "����" );
        set("age",14);
        set("str",99+random(30));
        set("cps",99+random(30));
        set("cor",99+random(30));
        set("per",99+random(30));
        set("int",99+random(99));
        set("spi",99+random(99));
        set("con",99+random(30));
        set("kar",99+random(30));
	set("long",
		"�����Ŀ������ܣ��������ˡ��ƺ���Ѱ��ʲô��....... \n");
        set("force",200);
        set("max_kee",9999);
        set("kee",9999);
        set_skill("literate",100);
        set_skill("shasword",230);
        set_skill("sword",230);
        set_skill("shaforce",150);
        set_skill("sha-steps",100);
        set("max_force",3000);
        set_skill("move",150);
        set_skill("force",200);
        set_skill("dodge",200);
        set_skill("parry",250);
        map_skill("dodge","sha-steps");
        map_skill("move","sha-steps");
        set_skill("sword",190);
        map_skill("force","shaforce");
        map_skill("sword","shasword");
        set_skill("unarmed",200);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        set_skill("cure",100);
        set("force_factor",10);
        set("chat_chance_combat",45);
        set("chat_msg_combat",({
        (:exert_function,"swordkee":),
        (: this_object(), "special_att3" :),
        }));  
        set("chat_chance",10);
        set("chat_msg", ({
                "���ӣ����ӣ�������� \n",
		"����������³Э�����ˡ������� \n",
                "��֪��������������³Эһ˫ˮ�������۾�����������㡣����\n",
	}) );  
	set("inquiry", ([
		"����": "�˼Ҹ��������棬���Ǹ����ˣ�~~\n",
                "³Э" : "������ѽ������Ҫ����ȥ��������\n",
                "���ʹ�" : "�˼Ҳ�֪�����~~~~~\\n",
		"����": (: ask_me :),
		"�ɽ�": "֣��ʦ�����Խ��ҽ���Ŷ��������\n",
                "�ɰ�" : "���ӱ��Ҹ��ɰ�ѽ������ϲ�����ˣ���\n",
	]) );
        
        set("combat_exp", 500000);
        set("attitude", "heroism");
carry_object("/open/killer/obj/fire_s.c");
	setup();
}

string ask_me(object who)
{
        set("title","����ħ��ʦ");
        set_name("���ʹ�" , ({"dark magic","ds"}));
        set("long",
           "��ò��ΪӢͦ���� ,�ĸ�����������.���Ǵ�˵�еĳ���ħ��ʦ��
�����޵еĴ�˵������Ů����Ҳ�Ǿ��г������������� \n");
        set("chat_msg", ({
                HIG"���ӣ����ӣ��������....�Ұ�������\n"NOR,
		HIG"�١�������С�����п�������ȥ�ȿ��ȡ�\n"NOR,
		HIG"���������������޵����µ�һ�����ʹ�������\n"NOR,
                HIG"������DS���۾��������֊����鲻�Ծ��İ�������\n"NOR,
	}) );  
        set("chat_chance_combat",75);
	set("chat_msg_combat", ({
                (: this_object(), "special_att2" :),
                HIG"DS˵�����ӣ����㿴����ү�ҵ�ħ��������\n"NOR,
                (: exert_function,"swordkee" :),
	        HIG"DS�ȵ� : ������ !��Ҫ��Ϊ��ү�Ҳ��ὣ���������У���\n"NOR,
	        (: this_object(), "special_att4" :),
	        HIG"DS˵�� : С�� ,�Կ��ҵ��³�ֻ��һ��·��������\n",
                "DSȫ���������������ŵĹ�â !\n"NOR,
                (: this_object(), "special_att" :),
                HIG"DS��Ц�� : �����ˣ�����Կ����ҵĳ���ɱ�У���!\n"NOR,
	                       })); 
        kill_ob(this_player()); 
        set("inquiry", ([
                "����" : (: do_mention :),
                "����" : (: do_angel :),
             ]));  
	message("vision",
		HIY " \n"
		"DS����͸��һ�ɹ���ĺ�� .\n\n\n"
		"DS��м��˵�� : С����Ҳ��ɱ�ң� ..\n"
                "DS˵�� : �þ�û�ж����� ...�ðɣ�����һ�̵�����ȥ ..\n\n"
                "DS�����ĳ���Ļ�ħ�� ..һ��Ѫ�콣���ħ�� .\n"
		,environment(), this_object() );
        set("attitude","friendly");
	set("pursuer", 1);
        set("bellicosity",500);
        set("force", 9999);
        set("max_force", 9999);
	set("combat_exp", 9999999+random(9999999));
        set("revealed", 1);
        message("vision","DS����һ̽�����ж���һ��ħ��"+HIC" ���׻�ħ��"NOR+"\n",
        environment(), this_object());
command("wield iceger");
        return HIC"����������!\n"NOR;
 }

string do_angel (object who)
{
        set("title","���ڶ���ʹ");
        set_name("·����" , ({"dark angel","rucy"}));
        set("long",
           "�찡�����㲻����������۾�����Ĵ��ڡ�������ǰ��������Ȼӵ�����Գ��
�Ѳ��������Ǵ�˵�еĴ���ʹ��վ��������ʹ�Ķ��ˣ������ޱ�������ħ����·��������\n");
        set("chat_msg", ({
                HIG"�������������ٴγ����ˣ��������ǵ�����\n"NOR,
		HIG"���аɣ�����ĳͷ�---��ա���������\n"NOR,
		HIG"�١�������˭Ҫ�ǸҶ���������������ˣ���\n"NOR,
                HIG"��������۾��ɣ���������������Ҫ��������\n"NOR,
	}) );  
        set("chat_chance_combat",100);
	set("chat_msg_combat", ({
                (: this_object(), "special_att5" :),
                HIG"����ǰһ��������ʧȥ·��������Ӱ��ֻ��������������\n"NOR,
                (: this_object(), "special_att6" :),
	        HIG"��о�����������������������ƺ����˲�һ���ı仯��\n"NOR,
	        (: this_object(), "special_att7" :),
	        HIG"ѹ����ǿ�����ѹ����о����������ŵ�ѹ������\n"NOR,
                (: this_object(), "special_att8" :),
                HIG"���������յĳͷ������������޴����ӵģ�����\n"NOR,
	                       })); 
        kill_ob(this_player()); 
	message("mud",
		HIY " \n"
		"�������޴������࣡��Ȼʹ�Һڰ�����ʹ·�����ٴ���������\n\n"
		"���л���ռ������ǣ�ϴ�ɾ����Ӱɣ���\n"
"������ĳͷ���Ҫ������---��ա�������\n\n"+this_player()->query("name")+"���аɣ���"NOR,users() );
        set("attitude","heroism");
	set("pursuer", 1);
        set("bellicosity",600);
        set("force",99999);
        set("max_force", 99999);
        set("max_gin",9999);
        set("eff_gin",9999);
        set("gin",9999);
        set("max_kee",99999);
        set("eff_kee",99999);
        set("kee",99999);
        set("max_sen",9999);
        set("eff_sen",9999);
        set("sen",9999);
	set("combat_exp", 99999999);
        set("revealed", 1);
        message("vision","·��������һ̽�����ж���һ��ħ��"+HIC" ���׻�ħ��"NOR+"\n",
        environment(), this_object());
        return HIC"����������!\n"NOR;
}

int special_att()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIG 
        "DS����˫�ۣ��૵Ć������ģ����ܵ������ƺ����˺ܴ�ı仯\n" NOR ,one);
        message_vision( 
        "DS����˫�۴�ȵ� :\n\n"+HIR"                      ***"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"*** "NOR+"\n",one);
        message_vision(HIC
        "����г������߸���ռ䣬����Χ�˹����������޴����ӣ�����\n"NOR,one);
        message_vision(HBGRN"$Nȫ�������ƺ�ȫ�����ռ�ֿ��ˣ�����Ĵ����Ѳ����κ����壡\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",99999+random(9999));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att2()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR 
        "DS������ͷ��ͷ����Ц˵���������ֱ��һҲ�Ҹ�����ս����\n" NOR ,one);
        message_vision( 
        "DS�������ִ��һ�� :\n\n"+HIR"                         ***"+HIW"ŭ"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"��ֻ�������屻һ���׽���֮�׻���Χ�� !\n"NOR,one);
        message_vision(RED
           "$Nȫ����������һƬ��֮�У����ⶼ�ѳʽ��� !\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",2000+random(1300));
         COMBAT_D->report_status(one);
        return 1;
}
int special_att3()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	³Э����� : С��Ŷ���Ҳ�����ƽ�����ǿ��Ү��������\n" NOR,one);
	message_vision("						
	³Э������ǰ�Ŀ���һ�� !����񿴵���ô�����ӽ���������Ƶ� !\n\n"
	"�㿴�������ǰ���׳�������ô���� !\n"
	,one);
	message_vision(HIR"һ������Ȫ���Ѫ$N���ϲ�ͣ����� !!\n\n"NOR
	               HIY"�Ǹ��ٶȼ���Ķ�����Ȼ��ͣ���Ը�������ҧ$N������!!\n"NOR
	               "һ���ٶȼ����"+HIW" ���� "NOR+"��$N��߲��ϵķ����� !! ҧ�Ų��ſ�����$N!
	\n"NOR,one);
	one->receive_wound("kee",500+random(9999));
	one->apply_condition("bleeding",10);
	one->start_busy(2);
	COMBAT_D->report_status(one);
	return 1;
}
int special_att4()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "
        DS������ͷ��ͷ����Ц˵���������ֱ��һҲ�Ҹ�����ս����\n" NOR ,one);
        message_vision( "
        DS�������ִ��һ�� :\n\n"+HIY"                         ***"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"*** "NOR+"\n",one);
        message_vision(HIG"�㿴��һ���޴�Ľ��ɫ������������˹��� !\n"NOR,one);
        message_vision(GRN"
           $N��ȴ˿���������ã��������Ŀ־廹�Ƕ�DS�Ŀ־壿!�����Ѳ���Ҫ��������Ϊ�㷢�����Ѿ�û���ˣ�\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",5000+random(10000));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att5()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIG 
        "����֮��������֮����Ϊ��֮��������֮�У���\n" NOR ,one);
        message_vision( 
        "�ع����·�������оۺϹ���\n\n"+HIW"                   ***"+HBMAG"��    ��    ��    ��    ��    ��"+HIW"***"NOR+"\n",one);
        message_vision(HIC
        "�������֪��������ʲô���飬ֻ������������������Ϯ�����޴����ӣ�\n"NOR,one);
        message_vision(HBGRN"$Nȫ�������ƺ��������������������\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",9999+random(9999));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att6()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR 
        "·����������˫�ۣ�������˵�š�\n" NOR ,one);
        message_vision( 
        "��˵�еĽ��䣡��\n"+HIR"                  ***"+HBMAG"��    ��    ��    ��    ��    ��    ��"+HIR"*** "NOR+"\n",one);
        message_vision(HIR"��ֻ�������屻һ��ڹ⽻��֮�׻���Χ�� !\n"NOR,one);
        message_vision(RED
           "$Nȫ����������һƬ����֮�У�����������������!\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",20000+random(10000));
         COMBAT_D->report_status(one);
        return 1;
}

int special_att7()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIR"
	·���������Գ����������������һ��ǿ����������·�������ܡ�\n" NOR,one);
	message_vision("���������ҵ�����ɱ��!\n\n"NOR,one);
	message_vision(HBMAG"      ----��     ԭ     ��     ��       ��      ��     ��------"NOR,one);
        message_vision(HIG"���飬���飬һ�ж����ɷ��飡��������Ŭ��ʹ�Լ��ظ�ԭ�Σ���\n"NOR,one);
	one->receive_wound("kee",50000+random(30000));
	one->apply_condition("bleeding",10);
	one->start_busy(3);
	COMBAT_D->report_status(one);
	return 1;
}

int special_att8()
{
        object *me,one;
        int i,before,after;
        me=this_player()->query_enemy();
        i=sizeof(me);
        one=enemy[random(i)];
        before = me->query("kee");
        message_vision( HIR "·��������һ����â��������ʣ�����������˺ܴ�ı仯������\n" NOR ,one);
        message_vision( "\n\n"+HIC"                         ***"+HIM"��"+HIY"**"+HIR"��"+HIY"**"+HIB"֮"+HIY"**"+HIG"��"+HIY"*** "NOR+"\n",one);
        message_vision(HIG"�㿴������ս���һ���޴�Ľ��ɫ�Ĺ��� !\n"NOR,one);
        message_vision(GRN"
           $N��ȴ˿���������ã��������Ŀ־廹�Ƕ���Ŀ־壿\n"NOR,one);
        after = me->query("kee");
        one->receive_wound("kee",99999+random(99999));
         COMBAT_D->report_status(one);
        return 1;
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
           message_vision("DS��е� : ����һ���㻹������ !��������!\n",this_player());
           set("attitude","aggressive");
           command("follow "+this_player()->name());
           kill_ob(this_player()); 
           }
	   else
           {
           message_vision("���ӣ��Ұ��㣡�� ..\n",this_player());
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
        if (this_object()->query("name") == "ds")
        {
          one->set("sp_title","���µ�һ");
          message_vision(HIR"��˵�е�ħ��DS������!\n"NOR,one);
   	  message("system",HIY"��˵�е�ħ��DS��"+one->name()+"���� !\n\n"NOR,users());
 	  message("system",HIY"�ڴ����� "+one->name()+"��������ǿ !!���ֵĿ���������!!\n\n"NOR,users());
        }
        if (this_object()->query("name") == "rucy")
        {
          message_vision(HIR"����Ϊ�ұ��������\n"NOR,one);
          message_vision(HIR"�����ˣ�������Ĵ����ˣ����һ��ٴγ��ֵģ���\n"NOR,one);
  	  message("system",HIY"
 	  ���ڴ���ʹ·������"+one->name()+"�����������ӡס�� !\n\n"NOR,users());
          this_player()->move("/open/death/start");
        }
return ::die();
}
	                
