// yen.c by wade and oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;

string do_ask1();
string do_ask2();

void create()
{
        seteuid(getuid());      // ����һ��Ҫ
        set_name("˾����", ({ "sma yen", "sma", "yen" }) );
        set("nickname", "������");
        set("title", "���˹�С�ӳ�");
        set("class", "bandit");
        set("race", "����");
        set("family/family_name","���˹�");
        set("env/����","YES");
        set("gender", "����");
        set("age", 35);
        set("long", "�����е��ǰѴ��������Լ�ɱ�˲�գ�۵ĺݶ��Ը�������������������\nΪ���ӱܳ�ҵ�׷ɱ����������˹��ж�ܣ������ܵ�ʮ����˵����á�\n����ʮ����˵��书�����Լ��Ľ���֮�У��Եø���������Ŀǰ��������\n����ض��˹ȵ���ڡ�\n");
        set("str", 30);
        set("cor", 30);
        set("max_kee", 1000);
        set("max_force", 500);
        set("force", 500);
        set("force_factor", 5);
        set("combat_exp", 250000);
        set_skill("sword", 75);
        set_skill("parry", 40);
        set_skill("dodge", 30);
        set_skill("move", 30);
        set_skill("force", 30);
        set_skill("badforce", 35);
        set_skill("badsword", 90);
        set_skill("ghost-steps", 40);
        map_skill("sword", "badsword");
        map_skill("dodge", "ghost-steps");
        map_skill("move", "ghost-steps");
        map_skill("force", "badforce");
        map_skill("parry", "badsword");
        set("chat_chance", 8);
        set("chat_msg",({
             "˾����˵��: �������죬��������ߡ�\n",
             "˾���̵�����һ��˵: ����ȣ���ɱ��������˵�ɡ�\n",
             "˾���̴�ͷɥ����˵: ��������ˣ���ʵ����Ϊ�˶�����µ�һ�񽣵�׷ɱ��\n",
             "˾����������һ��˵: Ҫ���Ȳ��ѣ�������������ʸ���\n",
        }) );
        set("inquiry", ([
            "ħ�ս���"  :       "���Ǵ���������ѧ���ġ�",
            "����"      :       "�����ڹ��У���˵���������Ϊ������һ��������!!",
            "�ڰ�����"  :       "����ν֮�׵�������ν֮�ڵ��������Ҳ����?",
            "���˹�"    :       "���˹��Ǻڰ������߲����ݵ�����·��",
            "���µ�һ��":     "���µ�һ�񽣲�������������?",
            "����"      :       "ʮ����˰䲼һ��ͨ��ж���֤��׼���ȡ�",
            "���"      :       "ʮ����˰䲼һ��ͨ��ж���֤��׼��ȡ�",
            "�ʸ�"      :       "�ʸ�ɱ����������˵�ɣ�������",
            "������"    :       (: do_ask2 :),
            "����֤"    :       (: do_ask1 :),
            "����֤��"  :       (: do_ask1 :),
        ]) );
        set_temp("apply/armor", 100);

        setup();
        add_money("gold", 2);
        carry_object(BAD_OBJ"yensword")->wield();
}

void attempt_apprentice(object who)
{
        command("say ��Ҫ������˹ȣ���ȥ�����Ǵ�ͷĿ�ɣ��Ҳ������㡣");
}

string do_ask1()
{
  object me=this_player();

  // �Ѿ�ȡ�ö���֤��
  if (me->query("quests/badman_license")) {
    if (!present("badman license", me)) {
        // if (new(BAD_OBJ"license")->move(me))
    if (new("/data/autoload/badman/license.c")->move(me))
          return "��? �����֤��ʧ��? ���ٲ�һ�Ÿ�����ˡ�\n";
        else
          return "�, sorry, ����֤Ŀǰ��ȱ�У��ȵ�������\n";
    }
    if (random(2))
        return "�����ϵĶ���֤����ȵ�֤�������ȥ���Թ�ȥ���Ҳ����㡣\n";
    else
        return "���Ѿ��ж���֤�ˣ������ҵ�ͬ�飬��ӭ������˹ȡ�\n";
  }
  else if (me->query_temp("quests/badman_license") != 0)
    switch (random(5)) {
        case 0:
          return "������ȥ�Ҷ���֤�������������?\n";
          break;
        case 1:
          return "�����Ҷ���֤��û�õģ��Ķ����������ж���\n";
          break;
        case 2:
          return "��Ȼ��ȥ����Ѱ�Ҷ���֤�ˡ�\n";
          break;
        default:
          return "ֻ�������ĵ�а����˲����ʸ��õ�����֤��\n";
          break;
    }
  else {
    me->set_temp("quests/badman_license", 1);
    if (random(2))
        return "����������������ʬ�������Ҿͷ�����һ�Ŷ���֤��\n";
    else
        return "����������õ�����֤���������������ʬ�������ɡ�\n";
  }
}

string do_ask2()
{
  switch (random(5)) {
    case 0:
        return "��! ���������˿ɾ���η���˰���\n";
        break;
    case 1:
        return "Ҫ������������Ҳ���ض㵽���˹����ˡ�\n";
        break;
    case 2:
        return "��������ڰ�������������ˣ�Ҳ���Ƕ��˹ȵ������С�\n";
        break;
    case 3:
        return "���Ľ����Ѿ��ﵽ�Ľ���һ�ĵز��ˡ�\n";
        break;
    default:
        return "�����������ˣ���һ�����Ҿ�ͷ�ۡ�\n";
  }
}

// Ҫ���������ʬ����
// ��Ϊ��Ҫ������Ȼ���
int accept_object(object who, object ob)
{      
  string name, str;

  if (ob->query("name") == "���õ�ʬ��") {
    tell_object (who, "˾���������˵��: ʬ�嶼�ó������ˣ�˭֪�����õ�"+
                        "����ֻ��è������ʬ�尡��\n");
    command("give "+who->query("id")+" "+ob->query("id"));
    return 1;
  }

  if (ob->query("name") != "�������ʬ��") {
    if (random(2))
        tell_object (who, "˾����������˵��: �����ø��������ʬ�壬"+
                                "����ҵ�����ʲô��ʲô����\n");
    else
        tell_object (who, "˾���̺޺޵ĵ�: �����������ʬ�����и�ƨ�ð���\n");
    command("give "+who->query("id")+" "+ob->query("id"));
    return 1;
  }

  if (who->query_temp("quests/badman_license")!=6) {
    if (random(2))
        tell_object (who, "˾���̺ܸ��˵�˵��: ��? Ҫ�����������ʬ��? "+
                     "�����ҿ���ȥ�����ˣ����л���ˡ�\n");
    else
        tell_object (who, "˾���̺ܸ��˵�˵��: лл����ôŬ������ɱ�������죬"+
                     "��ϧûʲô�����㡣\n");
    destruct(ob);
    return 1;
  }

  if (new("/data/autoload/badman/license.c")->move(who)) {
    if (random(2))
        tell_object (who, "˾���̿��˿�ʬ��˵: û�������������ʬ�壬"+
                                "�ͷ�����һ�Ŷ���֤�ɡ�\n");
    else
        tell_object (who,
                "˾���̿��˿�ʬ��˵: ���������������˹ȵĴ󻼵����ϣ�" +
                "�ͷ�����һ�Ŷ���֤�ɡ�\n");
    name = who->query("name");
    str = name[0..1];
    tell_object (who,
                "˾���̹����Ķ���˵: "+str+"���������벻�����ܸɵ������죬"+
                "�����Ѿ��ڵ����ˣ������\n");
    who->set("quests/badman_license",1);
    who->delete_temp("quests/badman_license");
  }
  else {
        write ("˾����̾�˿���˵��: Ŀǰ����ȱ������ֻ�õ��Ժ������ˡ�\n");
        who->delete_temp("quests/badman_license");
  }
  destruct (ob);
  return 1;
}
void init()
{
add_action("do_learn","llearn");
}
int accept_fight(object who)
{
  return notify_fail("˾���̵�����һ��˵: �ߣ�����û�����㣬�ٷ��ң�\n");
}
int do_learn(string arg)
{
object me=this_player();
if( me->query_skill("badsword",1) >= 90 )
return notify_fail("������ϰ�ı��һ�ǿ�ˣ�����û���������ˣ�\n");
if( me->query("potential") - me->query("learned_points") < 10)
return notify_fail("��Ǳ�ܲ�������ѧ??\n");
   if( me->query("get_badsword") != 1 )
   {
   return notify_fail("�㻹δѧ�ó����������ҽ���Ҳû�è�\n");
   }
   else
   {
   write("��ר�ĵ�ѧϰ��ħ�ս���\n");
   me->improve_skill("badsword",200);
   me->add("learned_points",10);
   }
return 1;}
int accept_kill(object who)
{
  object me;
  me=this_object();
  if( me->is_fighting() )
        return 1;
  command("shout ��С�ӣ�����Ӳ�����˹ȣ��ҿ����ǲ�Ҫ���ˡ�");
  command("shout �ֵ��ǣ���������"+who->query("name")+"��������ӣ�");
  return 1;
}

/*
void die()
{
  CHANNEL_D->do_channel(this_object(), "mud", HIY"\n���˹ȱ��������ˣ���"NOR);
  ::die();
}
*/
