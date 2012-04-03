// Room: /open/center/room/auroom.c
// copy from //u/c/chun/shop/auroom.c
// ���� auc ʱ���Զ��ȿۿ by wade 11/19/1999

#include <login.h>
#include <room.h>
#include <ansi.h>

inherit NPC;

object  auc_ob; // �����Ķ���
string  ob_name;
string  name;   // �������
int     times;  // �ڼ�������
int     value;  // ����ļ�Ǯ
int     had_auc;

void create()
{
        seteuid(geteuid());
        set_name("�����ϰ�", ({ "auction boss", "boss" }) );
        set("long",@LONG
���Ǻ����ϰ壬ר�ź�������õġ�
LONG );

        set("no_clean_up",1);
        set("channels", ({ "mud" }) );
        set("no_kill",1);
        times = 0;
        name = "";
        ob_name = "";
        setup();
}

void auction()
{
  object        *objs, me, auc_man=this_object(), who;
  int           half;

  remove_call_out("auction");
  who = find_player(name);
  if (times == 0) {
    ob_name = "";
    objs = all_inventory(this_object());
    if (half = sizeof(objs)) {
        auc_ob = objs[random(sizeof(objs))];
        ob_name = auc_ob->query("id");
        half = auc_ob->query("value")/2;
        if (!half) half = 1;
        value = random(4*half)+1;
        CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
          "��������"+
          auc_ob->query_temp("auc_master")+
          "����"+auc_ob->name()+"һ"+auc_ob->query("unit")+"!!"+
          "���"+CHINESE_D->cvalue(value)+"��");
        times = 1;
        name = "";
        had_auc = 0;
        call_out ("auction", 10);
    }
    return;
  }

  if (!auc_ob = present (ob_name, auc_man)) {
    ob_name = "";
    CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
      "����Ʒ��ʧ��ȡ������������", users());
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out ("auction", 10);
    }
    return;
  }
  
  me = find_player(auc_ob->query_temp("auc_master"));
  if ((name=="" && times > 3) || (name!="" && !who)) {  // �˻�
    ob_name = "";
    if (!me) {
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
        "�������ڣ�"+auc_ob->name()+"�乫��", users());
      destruct(auc_ob);
    }
    else {
    if(me->is_ghost()) {
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
          "̫��ϧ�ˣ���Ȼû����Ҫ��"+auc_ob->name()+"��");
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
          "���й�˾�ͻ�Ա������"+auc_ob->name()+"������ֻ�ó乫��");
      destruct(auc_ob); } else {
      auc_ob->move(me);
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
          "̫��ϧ�ˣ���Ȼû����Ҫ��"+auc_ob->name()+"��");
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
          "���й�˾�ͻ�Ա�˻�"+auc_ob->name()+"��ԭ��"+me->name()+"��");
    }
    }
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out ("auction", 10);
    }
    return;
  }
  // �����С�Ҳ���������꣬Ҳ�����İ壬������һ�κ���
  if (times <= 3) {
    if (had_auc) {
      had_auc = 0;
      CHANNEL_D->do_channel(auc_man, "mud", "�I���н��שI"
        "����! ������"+CHINESE_D->cvalue(value)+"����! ��ӭ�Ӽ�!!");
      times = 1;
    }
    else {
      CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
        "��"+chinese_number(times)+"������"+auc_ob->name()+"! �м�"+
        CHINESE_D->cvalue(value)+"! �����!");
      times++;
    }
    call_out ("auction", 10);
    return;
  }
  // ���κ����ˣ��������
  else {
    ob_name = "";
/* ��Ϊ���ȸ�Ǯ�ˣ�������Ҳ����ٸ�Ǯһ�Σ�����ж��õ�
 * by wade@FS 11/19/1999
    if (who->pay_money(value))
*/
    {
      CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"+
        auc_ob->name()+"��"+CHINESE_D->cvalue(value)+
        "������"+who->name()+"��");
      if(who->is_ghost()) {
        CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
          "��, ���ǹ���, ���򵽵Ķ����Ͳ��������!");
        destruct(auc_ob);
        }
      if ( !auc_ob->move(who) ) {
        CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
          "��, ��ķ�������↪!");
        destruct(auc_ob);
        }
      if (me) {
        if (value > 20000) value /= 3;
        else if (value > 5000) value /= 2;
        me->pay_player(value);

        if(auc_ob)
        tell_object(me, "�I���н��שI"
            "������һ"+auc_ob->query("unit")+auc_ob->name()+"�����"+
            CHINESE_D->cvalue(value)+"��\n");
      }
      else
        CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
          "����һ�������»�Ķ���, ׬���ˡ�");
    }
/* ��Ϊ���ȸ�Ǯ�ˣ�������θ���û����
 * by wade@FS 11/19/1999
    else {
        CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
          "����, "+who->name()+"��ô��Ǯ������? �´μǵ�׼����Ǯ�!");
      if (me)
        auc_ob->move(me);
    }
*/
    if (arrayp(all_inventory(auc_man))) {
      times = 0;
      call_out("auction", 10);
    }
    return;
  }
  if (!all_inventory(auc_man)) {
    times = 0;
    call_out("auction",10);
  }
}

void do_buy (object me, int new_value)
{
  object        who;
  int           diff, exp;

  if (!auc_ob) {
    CHANNEL_D->do_channel(this_object(), "mud", "�I���н��שI"
      "��! ������ʧ�ˡ��޷�������!");
    return;
  }
  if (name == me->query("id")) {
    tell_object (me, "�I���н��שI"
      "���̧��ۣ������ˣ�\n");
    return;
  }
  if (new_value <= value) {
    tell_object (me, "�I���н��שI"
      "�ٺ٣���Ⱥ��л���? �ɴ��Լ������к��ˡ�\n");
    return;
  }
  exp = (int)me->query("combat_exp");
  if      (exp < 100)    { diff = value/1000; if (diff < 10)    diff = 10; }
  else if (exp < 1000)   { diff = value/100;  if (diff < 20)    diff = 20; }
  else if (exp < 10000)  { diff = value/10;   if (diff < 40)    diff = 40; }
  else if (exp < 100000) { diff = value/4;    if (diff < 100)   diff = 100; }
  else if (exp < 500000) { diff = value/2;    if (diff < 400)   diff = 400; }
  else                   { diff = value;      if (diff < 1000)  diff = 1000; }

  if (new_value - value < diff) {
    tell_object (me, "�I���н��שI"
      "����ļ�Ǯ�������Ϻ��������������������"+
      CHINESE_D->cvalue(diff)+"��\n");
    return;
  }
  // ������������ȸ�Ǯ�Ļ�����һ���ǣ�
  // �Ȼ�Ǯ����һ���������(Ҳ��û��������)
  if (name) {   // ����������
    if (who = find_living (name)) {
      who->pay_player (value);  // �����ϴ��������Ǯ
      tell_object (who, "�I���н��שI"
        "��������ı꣬�������ϴγ���Ǯ��"+
        CHINESE_D->cvalue (value)+"��\n");
    }
	}
    me->pay_money (new_value);  // ����������Ҫ�ȸ�Ǯ
  
  // �������꣬�����¼�Ǯ�ǵ�һ��
  times = 1;
  // ��������˼�¼����
  name=me->query("id");
  // ��¼�¼�Ǯ
  value = new_value;
  had_auc = 1;
  call_out("auction", 1);
}

// me sell ob.
int do_sell(object me, object ob)
{
  if (ob_name != "") {
    tell_object(me, "�I���н��שI"" ������\n");
    return 0;
  }

  if (!ob || !ob->move(this_object())) {
    tell_object(me, "�I���н��שI"
      "�ٺ�, ������ƭ���й�˾����Ա����\n");
    return 0;
  }
  ob->set_temp("auc_master", me->query("id"));
  times = 0;
  tell_object(me, "�I���н��שI"" ������\n");
  call_out ("auction", 1);
  return 1;
}
