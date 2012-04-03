#include <ansi.h>
inherit NPC;
void do_special1();
void do_special2();
void do_special3();
void do_special4();
void do_special5();
void do_special6();
void do_special7();
void do_special8();

void create()
{
        set_name("��Զ�", ({"npc09","wataru"}));
        set("age",16);
        set("title",HIC"����ۡ�"NOR);
        set("gender","����");
        set("class","killer");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_kee",20000);
        set("combat_exp",8000000);
        set("max_force",30000);
        set("force",30000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
        (: do_special1 :),
        (: do_special2 :),
        (: do_special3 :),
        (: do_special4 :),
        (: do_special5 :),
        (: do_special6 :),
        (: do_special7 :),
        (: do_special8 :),
        }));
        set_temp("apply/armor",130);
        set_temp("apply/damage",110);
        setup();
carry_object("/data/autoload/killer/ski_dream");
}

void do_special1()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIG
        "��Զɱ���˫�ۣ��૵Ć������ģ����ܵ������ƺ����˺ܴ�ı仯\n"NOR,target);
        message_vision(
        "��Զ�����˫�۴�ȵ�:\n\n"+HIR"                          ***"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"**"+HIG"��"+HIR"***"NOR+"\n",target);
        message_vision(HIC
        "����г������߸���ռ䣬����Χ�˹����������޴����ӣ�����\n"NOR,target);
        message_vision(HBGRN"$Nȫ�������ƺ�ȫ�����ռ�ֿ��ˣ�����Ĵ����Ѳ����κ����壡\n"NOR,target);
        target->receive_wound("kee",800+random(500));
        COMBAT_D->report_status(target);

  }

void do_special2()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR
        "��Զɲ�����ͷ��ͷ����Ц˵���������ֱ��һҲ�Ҹ�����ս����\n"NOR,target);
        message_vision(
        "��Զɾ������ִ��һ�� :\n\n"+HIR"                         ***"+HIW"ŭ"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"**"+HIW"��"+HIR"*** "NOR+"\n",target);
        message_vision(HIR"��ֻ�������屻һ���׽���֮�׻���Χ��!\n"NOR,target);
        message_vision(RED
           "$Nȫ����������һƬ��֮�У����ⶼ�ѳʽ��� !\n"NOR,target);

        target->receive_wound("kee",800+random(500));
        COMBAT_D->report_status(target);

  }

void do_special3()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR"
        ��Զɴ���� : С��Ŷ���Ҳ�����ƽ�����ǿ��Ү��������\n"NOR,target);
        message_vision("
        ��Զ�������ǰ�Ŀ���һ�� !����񿴵���ô�����ӽ���������Ƶ�!\n\n"
        "�㿴�������ǰ���׳�������ô���� !\n"
        ,target);
        message_vision(HIR"һ������Ȫ���Ѫ$N���ϲ�ͣ����� !!\n\n"NOR
                       HIY"�Ǹ��ٶȼ���Ķ�����Ȼ��ͣ���Ը�������ҧ$N������!!\n"NOR
                       "һ���ٶȼ����"+HIW" ����"NOR+"��$N��߲��ϵķ����� !! ҧ�Ų��ſ�����$N!
        \n"NOR,target);
        target->receive_wound("kee",800+random(500));
        target->start_busy(2);
                COMBAT_D->report_status(target);

  }

void do_special4()
  {
    object *enemy,target;
    int i;
        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR "
        ��Զɲ�����ͷ��ͷ����Ц˵���������ֱ��һҲ�Ҹ�����ս����\n" NOR ,target);
        message_vision( "
        ��Զɾ������ִ��һ�� :\n\n"+HIY"                         ***"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"**"+HIM"��"+HIY"*** "NOR+"\n",target);
        message_vision(HIG"�㿴��һ���޴�Ľ��ɫ������������˹��� !\n"NOR,target);
        message_vision(GRN"
$N��ȴ˿���������ã��������Ŀ־廹�Ƕ���ԶɵĿ־壿��Ϊ�㷢�����Ѿ�û���ˣ�\n"NOR,target);

        target->receive_wound("kee",800+random(500));

                COMBAT_D->report_status(target);

  }

void do_special5()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
         message_vision( HIG
        "����֮��������֮����Ϊ��֮��������֮�У���\n" NOR ,target);
        message_vision(
        "�ع������Զ����оۺϹ���\n\n"+HIW"                   ***��    ��    ��    ��    ��    ��"+HIW"***"NOR+"\n",target);
        message_vision(HIC
        "�������֪��������ʲô���飬ֻ������������������Ϯ�����޴����ӣ�\n"NOR,target);
        message_vision(HBGRN"$Nȫ�������ƺ��������������������\n"NOR,target);
                target->receive_wound("kee",800+random(500));
                COMBAT_D->report_status(target);

  }

void do_special6()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR
        "��Զɱ�����˫�ۣ�������˵�š�\n" NOR ,target);
        message_vision(
        "��˵�еĽ��䣡��\n"+HIR"                  ***��    ��    ��    ��    ��    ��    ��"+HIR"*** "NOR+"\n",target);
        message_vision(HIR"��ֻ�������屻һ��ڹ⽻��֮�׻���Χ��!\n"NOR,target);
        message_vision(RED
           "$Nȫ����������һƬ����֮�У�����������������!\n"NOR,target);

                target->receive_wound("kee",800+random(500));
                COMBAT_D->report_status(target);

  }

void do_special7()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR"
        ��Զɵ����Գ����������������һ��ǿ������������Զ����ܡ�\n" NOR,target);
        message_vision("���������ҵ�����ɱ��!\n\n"NOR,target);
        message_vision(HBMAG"      ----��     ԭ     ��     ��     ��     ��     ��------\n"NOR,target);
        message_vision(HIG
"���飬���飬һ�ж����ɷ��飡��������Ŭ��ʹ�Լ��ظ�ԭ�Σ���\n"NOR,target);
        target->receive_wound("kee",800+random(500));
        target->start_busy(3);
                COMBAT_D->report_status(target);

  }

void do_special8()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];
        message_vision( HIR "��Զɻ���һ����â��������ʣ�����������˺ܴ�ı仯������\n" NOR ,target);
        message_vision( "\n\n"+HIY"                         ***"+HIC"��"+HIY"**"+HIR"��"+HIY"**"+HIB"֮"+HIY"**"+HIG"��"+HIY"*** "NOR+"\n",target);
        message_vision(HIG"�㿴������ս���һ���޴�Ľ��ɫ�Ĺ���!\n"NOR,target);
        message_vision(GRN"
           $N��ȴ˿���������ã��������Ŀ־廹�Ƕ���Ŀ־壿\n"NOR,target);
        target->receive_wound("kee",800+random(500));

                COMBAT_D->report_status(target);

  }

int accept_kill(object who)
{
who=this_player();
kill_ob(who);
command("charge "+who->query("id"));
command("perform fireforce.gold-fire");
command("cmd usekee "+who->query("id"));

    return 1;
}
int accept_fight(object who)
{
who=this_player();
kill_ob(who);
command("charge "+who->query("id"));
command("perform fireforce.gold-fire");
command("cmd usekee "+who->query("id"));

    return 1;
}
void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){                 //ok by chan
 object who=this_player();
 object ob,wataru;
 ob=this_object();
 wataru=present( "wataru",environment(ob) );
 if(str=="askgod wataru" || str=="askgod wataru"){
write(HIY"��Զ���˵��������ʹ�������ʲ������ǻ�ò��ͷ��ˡ���!!\n"NOR);
 command("perform fireforce.gold-fire");
 wataru->kill_ob(who);
 return 1;
                  }
}

void heart_beat()
{
        object env, mob = this_object();
        int i;

        set_heart_beat(1);

        if( query("kee") < 0)
            mob->die();

        if( query_temp("heal") < 50 )
        {
            if( query("force") < 10000)
            {
               mob->add("force",10000);
            }
            if( query("kee") < 10000 )
            {
                mob->receive_curing("kee",1000);
                mob->receive_curing("gin",300);
                mob->receive_curing("sen",300);
                mob->receive_heal("kee",1000);
                add_temp("heal", 1);
                tell_room(environment(), HIY+name()+"������С�"+
                     "С�����������������������.\n"+NOR);
            }
        }
        ::heart_beat();
}


int heal_up()
{
        if (!is_fighting() ) {
             message_vision (HIW"ϵͳ��ս��ֹͣ��$N�����У���\n"NOR, this_object ());
             destruct(this_object());
             return 1;
        }
        return ::heal_up() + 1;
}
void die ()
	{
	 object me=query_temp("last_damage_from");
	if(!present("fight_card",me))
	{
	tell_object(me,"\n\nϵͳ��������ûЯ����Ƭ�������޷���¼ս����\n");
	destruct (this_object ());
	return ;
	}
	if(!me->query("quest/start_game"))
	{
	tell_object(me,"\n\nϵͳ��������û����ʽ�Ǽǣ������޷����䡣\n");
	destruct (this_object ());
	return ;
	}
	if(me->query("quest/start_game")< 10)
        {
        tell_object(users(),HIY"
	��ϲ"HIW+me->query("name")+HIY"��ս"HIG"��"HIR"�ھŲ���������"HIG"��"HIY"ͨ������

	"HIW"ϣ��"+me->query("name")+"�ܲ����������´�"HIG"��"HIY"��ʮ����������"HIG"��"HIW"��
	"NOR);
	me->set("quest/start_game",10);
        destruct (this_object ());
	return ;
        }
	{
	tell_object(me,HIW"ϵͳ�����Ѿ�ͨ�����ԣ�ϵͳ�����κθ��ġ�\n"NOR);
	destruct(this_object());
	:: die();
	}
}