#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
inherit SSERVER;
string ask_test()
{
 if(this_player()->query("quests/yan")==3)
 {
if(this_player()->query("quests/fear_fighting",1) && this_player()->query("quests/yantestmark2",1) )
  {

  command("say лл���İ�æ.��Ը�⽫appo���ҵ�ӡ�Ǵ���������!\n");
  tell_object(this_player(),HIW"˲����ʥ���齫�ִ�����ļ���..���ʱ����
һ��ů����ʥ��������д�����\n"NOR);
  this_player()->delete("quests/2ndtest",i);
  this_player()->set("quests/yantestmark3",1);
  return("�������һ����...��Ͽ�ȥ�����Ĳ����~\n");
  }
 else if (this_player()->query("quests/yantestmark3")>1)
  return ("���Ѿ���ӡ�Ǹ�����..�㻹Ҫ��ʲô\n");
 else
  return ("����ҵ�����..�Ҿ͸���˵ӡ������\n");
 }
else
 return ("ɶӡ��..����˵ʲô?\n");
}

string so()

{
        if( this_player()->query("quests/kill-snow") ) return " ??";
        this_player()->set_temp("ask_so",1);
        return "����������˴���ǰȥ����֪�����Ƿ�ϰ��������æ��ʥĳ�����س꣡\n";
}

string liyu()
{
object me,ob;
me = this_player();
if (me->query("liyu") != 4)
{
command("say ��˵����������֮һѽ....ԭ��������������û��....����....����ǰ��ë������������ʱ....��С����ʧ��.....�ǵõ�ʱ�����Ǳ���λ��֪������ʿ��͵��.....�������֪����˭���ߵ�.....��ȥ��������������԰������㿴....");
me->set("liyu",1);
}
else
{
command("say �ҲŸո��û��������...���..������.������Ե��..��ȥ�ð�.. ���ڴ˴���enter");
me->set("liyu",5);
}
}
string book()
{
        object ob, me= this_player();
// Add By AceLan....�������ŵĲ�׼����....ccc....
    if( me->query_temp("get_war_book"))
    return "��ֻ��һ��, �����Ѿ���������...\n";
    if( present( "war book" , me ) ) 
    return "�㲻�������� ?\n";
        ob = new("/daemon/class/scholar/book");
        ob->move( me);
        message_vision("$N��$nһ��"+ob->name()+"\n",this_object(),
    me);
    me->set_temp("get_war_book", 1);
        return "�Ȿ��������úõؿ��ɡ�\n";
}

int finish( object me )
{
        object obj ;
        command("say ʮ�ָ�л���µ�����������һ֧����֮�ѣ���ʥĳ�Ҵ�֮����");
        message_vision("$N��$nһ֧���ӡ�\n",this_object(),me);
        obj = new("/open/snow/obj/de");
        obj->move( me );
        me->set("quests/fear_fighting",1);
}
string ask_picture()
{
        if( present( "snow picture" , this_player() ) )
                return "������������İ���ͼ�ǳ���������������û��ϸ�����·��ͼ��û�취�ҵ�·�ڵġ�\n";
        return "������ ? ����˭�� ?\n";
}
string ask_place()
{
        object ob;
        command("say ���������������ѩ��ɽ�ţ�����һ�������޷������ҵ����ġ�");
        command("say ��Ϊ�������沼���ˡ�����ͼ�����������ⷽ�����Ҳ����ġ�\n");
        command("say ����һ��·��ͼ������ȥ�ɡ�");
        ob = new( "/open/snow/obj/picture" );
        ob->move( this_player() );
        message_vision("$N��$nһ��·��ͼ��\n",this_object(),this_player());
        return "ף����� ... ";
}
void create()
{
        set_name("ʥ����",({"master sue","sue"}));
        set("long","����һ��ʮ�����ŵ������ˣ���ȴ�������е����������͡�\n");
        set("gender","����");
        set("class","scholar");
        set("nickname","��ָ����");
        set("combat_exp",3000000);
        set("attitude","heroism");
        set("age",26);
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("max_gin",10000);
        set("s_kee",1000);
        set("max_s_kee",1000);
        set("sec_kee","god");
        set("force",5000);
        set("max_force",5000);
        set("max_kee",10000);
        set("kee",10000);
        set("max_sen",10000);
        set("sen",10000);
        set_skill("literate",120);
        set_skill("cure",60);
        set("force_factor",10);
        set_skill("force",80);
        set_skill("stabber",120);
        set_skill("dodge",70);
        set_skill("knowpen",100);
        map_skill("stabber","knowpen");
        set_skill("parry",70);
        set_skill("poetforce",80);
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        set_skill("unarmed",20);
        set_skill("move",70);
        set_skill("plan",120);
        set_skill("winter-steps",100);
        map_skill("dodge","winter-steps");
        set_skill("god-plan",100);
        map_skill("plan","god-plan");
        set("chat_chance_combat", 100);
        set("inquiry",([
        "��ս��" : "���Ī������ؽӵ���һ����ս�飬�����������š�\n",
        "����" : "����Ͳ��ʺ쳾�����ˣ����ǲ�ȥ��Լ���ֿ�Ϊ����������Ц�����...\n",
        "Ѫħ" : "��~~~�������.....�ò���Ѫħ�Ѿ��Ʒ���.....��..��������....",
        "����" : "���ǵ�����ӵĲ�������..�����Ѿ���ʧһ������\n",
    "�������" : (: liyu :),
        "Ѫħ��ӡ" : "����Ϊ�˽�Ѫħ��ӡ...�ɽ���ң�ӽ����佣[�ɽ�����]�뽣ʦ���������ɿ���������...һ������..һ������..һ���䴫��.��������������ʥ��ѹ��Ѫħħ��",
        "��ң��" : "�ɽ���ʦү��~~~��ħս���Ѳ�֪ȥ��....",
        "������" : "��ʦ˵�����¼����вŻ�������ʦ��...���ڸ��ԹŹ�..����һ�����������������....�治����[�ɽ�����]����ô���ɵ�...",
        "���" : (: so :),
        "����֮��" : "���˼Ҵ�֮�����ݼҸ�˵ʹ�ô˵�(use)�����ٻ�����˵�е����������Ǳ������ض�֮��ʹ�ã�����Ҫ������ʹ�ã��ҾͲ��ö�֪��",
        "ȥ�ϻ�ͯ��" : "������˵����������һ�������Ԫ�С�������������ټ�������֮�����ܲ������ϻ�ͯ��Ч�������Ƿ�������Ҳ��������\n",
        "��Ԫ��" : "���������ƺ����ڶ�ʮ��ǰ���Ҿ��Ѿ�ʧ�䡣\n",
        "������" : "�� ... �������£����±����ϣ������ʥ���������顱������������Ҳ��\n",
        "��������" : "���˸���������������˵���֪ʶ֮���⣬�����Ǳ�������ѧ�����Ρ����ԡ�ҽ������������ͨ��\n",
        "�������" : "�������и�\��֮�ţ�Ȼ����ʱҲ��������������ѩ��ɽ�¡�\n",
        "�������" : "��������Ǳ����һ�ʯ���ռ�ս��������д֮��, ���������¹�Ƨ, �����ҵ�����\n",
        "ѩ��ɽ��" : (: ask_place :),
        "·��ͼ" : (: ask_picture :),
        "����ӡ��" : (: ask_test :),
        "��������" : (: book :),
        ]));
        set("chat_msg_combat",({
        (: perform_action,"stabber.movedown" :),
        (: perform_action,"stabber.finger" :),
        (: perform_action,"plan.lock-link" :)
        }));
        setup();
        create_family("����",16,"����");
        carry_object(START_OBJ"ten_pen")->wield();
        carry_object(START_OBJ"k_cloth")->wear();
}

void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="scholar")
        {
                command("say �������Ҳ����������Ϊͽ�� ?\n");
                return;
        }
        command(":)");
        command("recruit "+ob->query("id"));
}
void init()
{
        object me = this_player();
        if( me->query("quests/kill-snow") && !me->query("quests/fear_fighting") )
                call_out("finish",1,me);
        add_action("do_nod","nod");
}
int do_nod()
{
        object ob = this_object() , me = this_player();
        object obj;
        if( me->query("quests/kill-snow") ) return 0;
        if( !me->query_temp("ask_so") ) return 0;
        if( me->query_temp("get_letter") ) return 0;
        command("say ��ô .... �ͷ������ˡ�");
        obj = new("/daemon/class/scholar/letter");
        obj->move( me );
        message_vision("$N����$nһ�����š�\n",ob,me);
        me->set_temp("get_letter",1);
        return 1;
}
int accept_fight(object who)
{
 command("cmd god_kee");
 fight_ob(who);
 command("perform plan.fire");
 return 1;
}

int accept_kill(object who)
{
  command("say ���㳢�����һ�֮�е���ζ��\n");
 kill_ob(who);
 command("cmd god_kee");
 command("perform stabber.movedown");
 return 1;
}
int accept_object(object me, object obj)
{
        if( obj->query("name") == "���ӱ���" )
        {
          command("pat "+getuid(me));
          command("say �кδ�������???��Ϊʦ��ָ����ɡ�");
          if( me->query("family/family_name") == "����" && !me->query("marks/kid-book") )
          {
            command("say �벻�������ר�ģ��ʹ������������ɣ�");

write(this_object()->query("name")+"ָ���������е��ɻ�\n\n"+
            "����������ɻ��Ȼ��ͨ, �Ա�������֪����һ�㡣\n\n"+
            "����������ﵽ�����ˡ�\n\n"+
            "���Ѿ���ȫ�˽��˱�����֪ʶ�ˡ�\n\n");
            if( me->query("force") < me->query("max_force") )
              me->set("force",me->query("max_force"));
            me->set("marks/kid-book",1);
          }
          destruct(obj);
        }
        else
          command("? "+getuid(me));
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
        if(winner->query("family/family_name")=="�ɽ���" && winner->query("killyao")==1 && winner->query("bloodsword")==1)
        {
        object me,ob;
        me = this_player();
        ob=new("/open/gsword/obj1/brain.c");
        tell_object(winner,HIR"���ʬ�����ڳ���һ��Ѫ���ܵĴ���.."NOR);
        ob->move(winner);
        winner->set_temp("swordbrain",1);
        }

        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj3/water_feather")->move(environment(winner));
          message_vision(HIM"\n��ʥ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/water_feather",sprintf("%s(%s) ��ʥ���������ˮ֮������ %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj3/water_feather")->move(environment(winner));
          message_vision(HIM"\n��ʥ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/water_feather",sprintf("%s(%s) ��ʥ���������ˮ֮������ %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        tell_object(users(),HIW"\n
����"HIR"����������Ӱ��̾Ϣ...\n
             "HIG"�� �� �� �� �� · �� �� �� 
                    �� �� �� Ե �� �� �� �� 
                        �� �� �� ȥ �� �� �� ��
                            �� �� �� �� �� �� �� �� ��\n"HIY"
                    ��"HIW"������"HIY"..."HIW"������"HIY"...���Ҫ���ұ���Ҳ...��\n"HIR"
            ���žŴ��֮�ס�"HIY"ʥ����"HIR"����񾹲���������"HIG+winner->name()+HIR"֮��....\n\n"NOR);

        ::die();
}






