// �μ� ���� made by onion
#include </open/open.h>
inherit NPC;
string do_duan();
string do_thief();
string do_linpo();
int do_gone();
object ob=this_object();
void create()
{
        set_name("���Ǵ��",({"great thief","thief"}));
        set("long","��Ȼ����һ����ͨ���Ĵ��, ��üĿ��ȴ������һ�ɲ��������ʡ�\n"+
            "�ƺ���������ˮ����ͬ��, ����ϼ������ɡ�\n");
        set("gender","����");
        set("class","scholar");
        set("combat_exp", 100000);
        set("attitude","heroism");
        set("age",44);
        set("inquiry", ([
        "duan" : (: do_duan :),
        "�μ�" : (: do_duan :),
        "chao" : (: do_duan :),
        "thief" : (: do_thief :),
        "�貨΢������" : (: do_linpo :),
        "Сʦ��" : "����Ϊ�һ����˵��!�ߣ��붼����!!",
        ]));
        set("chat_chance_combat", 100);
        set("chat_msg_combat", ({
        (: this_object(),"do_gone" :),
        }));
        set("force",1000);
        set("max_force",1000);
        set("force_factor", 20);
        set_skill("force",40);
        set_skill("dodge",70);
        set_skill("unarmed",30);
        set_skill("sunforce",40);
        set_skill("linpo-steps",60);
        set_skill("six-fingers",71);
        map_skill("force","sunforce");
        map_skill("dodge","linpo-steps");
        map_skill("move","linpo-steps");
        map_skill("parry","six-fingers");
        map_skill("stabber","six-fingers");
        map_skill("unarmed","six-fingers");
        set_temp("apply/dodge",50);
        set_temp("apply/damage",50);
        set_temp("apply/armor",100);
        setup();
        carry_object(CAPITAL_OBJ"cloth1")->wear();
        carry_object(CAPITAL_OBJ"pen0")->wield();
        carry_object(CAPITAL_OBJ"pen0")->wield();
        add_money("silver",10);
}

void init()
{
        add_action("do_forgive","forgive");
        add_action("do_want","want");
}
string do_duan()
{
        set_name("���ٷ�",({"chao"}));
        return("ԭ�����Ѿ�֪�����Ƕμҵ����ˡ�\n");
}
string do_thief()
{
        object me=this_player();
        if( !this_object()->queyr_temp("lost") )
        {
        me->set_temp("thief",9);
        remove_call_out("do_flee");
        call_out("do_flee",3);
        set_name("���ٷ�",({"chao"}));
        return("����, �ұ������ٷ�, ���ǵİ��Ӷ���������, ������͵������Щ�ĳ���������������"+
        "ǿ��������Ǯ�ƹ���, �˼õ��Ǹ�����һ�յ�ƶ��, ��Υ��, ȴ���顣�����, "+
        "���˲�����, ��ƫƫҪ��, ֻҪ�Ǻ�������, ����ʲô�����ԡ�\n");
        }
        else
        return("�ⲻ������¡�\n");
}
string do_linpo()
{
        object me=this_player();

        if(this_object()->query("name")!="���ٷ�")
          return 0;
        if(me->query("family/family_name")!="�μ�")
          return "�Ҳ�������˵ʲô��";
        if(me->query("marks/ask_linpo")!=1)
          return "�����˵��������Ҳ����������ʦ�Ų�������!!\n";
        me->set("marks/ask_linpo",2);
        command("hmm");
        return "��û�뵽�㾹Ȼ֪������£�����������Ҳû�ã���Ϊ���Ѿ��������͸��ҵ�Сʦ���ˡ�";
}
void do_flee()
{
        object me=this_player();
        tell_room(environment(ob),query("name")+"����һ��, �ƺ���Ҫ����, ���������ֿ�İ�������������\n");
        message_vision("$N��$n����������\n",me,ob);
        ob->fight_ob(me);
}

int do_gone()
{
        object *me;
        me=ob->query_enemy();
        if( me[random(sizeof(me))]->query_temp("thief") != 9 )
        {
          command("say ��������˵�����ǰ�..����ˡ�");
          tell_room(environment(ob),query("name")+"����һ��, ��Ӱһ��, �㲻֪�����ˡ�\n");
          destruct(ob);
        }
        return 1;
}

void unconcious()
{
        object winner = query_temp("last_damage_from");
        if( !query_temp("lost") )
        {
          message_vision("$N�Ӽ���ææ�Ĵӻ����ͳ�һ��С�����˹�������\n",ob);
          command("say ��Ȼ�Ҽ�������  �Ǿ���ƾ�㴦�ð�");
          tell_object(winner,"[1;36m��Ҫԭ��(forgive)����?[0m\n");
          set_temp("lost",getuid(winner));
          ob->remove_all_enemy();
          set("kee",100);
        }
        else
        {
          ob->delete_temp("undead");
          :: unconcious();
        }
}

int do_forgive(string str)
{
        object me=this_player();
        if(ob->query_temp("lost") == getuid(me) || !me->query("quests/catch_thief") )
        {
          command("say ��, ����"+RANK_D->query_respect(me)+"��������, ������"+
          "һ�λ���, �����ϴ�ֲ����ˡ�");
          if( !ob->query_temp("get_reward") )
          {
            message_vision("$N�ӻ����ͳ�����������\n",ob);
            command("say �������������Ҷ���ǰ�����е�����, һ��һ�ž�ת��(pi"+
            "ll), ����һ���������(weapon), Ϊ�˸�л��, ����������һ����, ����"+
            "Ҫ(want)ʲô��?");
            if( !me->query("quests/catch_thief") )
            {
            write("\n\n[1;36***��ɾ��Ǵ��֮��***[0m\n�õ�ʵս���� 200��\n");
            me->set("quests/catch_thief",1);
            me->set_temp("can_get_reward",1);
            me->add("combat_exp",200);
            me->delete_temp("thief");
            }
          }
          else
          {
            command("say ��͸���ˡ�");
            destruct(ob);
          }
          return 1;
        }
        return 0;
}
int do_want(string str)
{
        object me=this_player();
        object reward;
        int kind;
        if( me->query("quests/catch_thief") || !ob->query_temp("get_reward") || me->query_temp("can_get_reward") )
        {
          if( str == "pill" || str == "weapon")
          {
            if( str == "weapon" )
            {
              if( me->query("class") == "blademan" || me->query("class") == "swordsman" )
              {
              if( me->query("class") == "blademan" )
                kind=random(2)+3;
              if( me->query("class") == "swordsman" )
                kind=random(2)+1;
              }
              else
                kind=random(4)+1;
              switch(kind)
              {
              case 1 :
              reward=new(CAPITAL_OBJ"4-1");                     break;
              case 2 :
              reward=new(CAPITAL_OBJ"4-4");                     break;
              case 3 :
              reward=new(CAPITAL_OBJ"4-3");                     break;
              case 4 :
              reward=new(CAPITAL_OBJ"4-2");                     break;
              }
            }
            if( str == "pill" )
              reward=new(CAPITAL_OBJ"gold_pill");
            message_vision("$N�����ϵ�"+reward->query("name")+"����$n��\n",ob,me);
            if( me->query_max_encumbrance() - me->query_encumbrance() > reward->query_weight() )
              reward->move(me);
            else
            {
              message_vision("$N����̫����, ��$n��"+reward->query("name")+"���ڵ��ϡ�\n",me,ob);
              reward->move(environment(me));
            }
            if( str == "weapon" )
              command("say �˰�����ҵ�ѷ⳾����, ����Ҫ�����������ȿ���(blood)�����������");
            ob->set_temp("get_reward",1);
            me->delete_temp("can_get_reward");
            command("say "+RANK_D->query_respect(me)+"�����, �ʹ˰ݱ�");
            tell_room(environment(ob),ob->query("name")+"ת��ʯ����, ��ͷ¶��"+
            "һ����, ����Ӵ˶����˳�ȥ, ֮��������ֻ����Ĺرա�\n");
            destruct(ob);
          }
          else
            command("say ʲô?");
          return 1;
        }
        else
          return 0;
}
