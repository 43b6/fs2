// ����ɱ��ָ�� by Chan 10/30/98
// ֻ���ɽ׼�һ��������ʹ��
// ȡ��ɱ�ֵĲ���...���������İ��������Զ�����
#include <ansi.h>
inherit F_CLEAN_UP;
int help( object me );
int main( object me,string str )
{
  int cgold;
  object ob,killer;
  if( !sizeof(str) )
    return notify_fail( "�����ʽ����!!���help ckill\n" );
  if(!me->query("clan"))
    return 0;
  if(me->query("clan/rank") > 3)
    return notify_fail("��Ľ׼�����,����ʹ��׷ɱ��!!!\n");
  ob=find_player(str);
  if(!ob) ob=find_living(str);
  if(!ob) ob=LOGIN_D->find_body(str);
  if(!ob)
     return notify_fail("����׷ɱ���˲�������Ŷ???\n");
	 if(wizardp(ob)) // cgy ֻ���Լ���..?_?...by avgirl..pig..av���Ĵ���..����ppl��ֻ���Ҷ���
     return notify_fail("����׷ɱ���˲�������Ŷ???\n");
  if(!userp(ob))
     return notify_fail("��ֻ��׷ɱ�������Ŷ!!!!\n");
  
  if(ob==me)
      return notify_fail("����׷ɱ�Լ�ѽ!!!��û�и��ѽ???\n");
  if( ob->query("ckill"))
    return notify_fail("���Ծ���׷���ˡ�\n");
  if((me->query("clan/name")==ob->query("clan/name"))&&(me->query("clan/rank")>ob->query("clan/rank")))
    return notify_fail("���޷�׷ɱ�Լ��İ����ϴ�!!\n");

    message_vision("$N��������׷ɱ��,�����а��ɵ���ȫ��׷ɱ$nΪ\n",me,ob);
    CHANNEL_D->do_channel(me, "shout", "��"+me->query("clan/name")+"��"+me->query("clan/title")+"��������׷ɱ��,��ȫ��ȫ��׷ɱ"+ob->query("name") +"!!" );

    ob->set("ckill",1);
    ob->set("ckill_id",me->query("clan/name"));
// ckill����Ǯ?!...����Ǯ by avgirl 00/10/03
    CLAN_D->add_money(me->query("clan/id"),-(ob->query("combat_exp")/1000));
  return 1;
}

int help( object me )

{
    write(@HELP

��ʽ˵��:ckill <ID> ׷��ָ������ (�޽׼�һ������������ʹ��)
ָ��˵��:
  ���Ƿ������ɵ�׷ɱ������ɵ�Ǯ�밵ɱ��ʶ��ɱ��ȥ׷ɱָ������,��ɱ��ʶ
�����Ҫɱ���˵ľ���ֵ��������!!!
ps:1.��׷ɱ����ֻ����ҡ�
   2.��׷ɱ����û�а�ȫ����,���񶷳�Ҳһ��������
   3.��׷������Ҫ���׷��ֻ���������������⡣
   4.�����ڱ�׷��ʱ���á�
   5.ɱ��׷��������Ǯ�����á�
   6.׷�����˿���quit��
   7.һ�����ֻ����һ�����ɷ�׷���
   8.ֻ�����������ʱ���ܷ�����
   9.����ҵİ��ڻ��Զ�ȥ��ɱ��׷ɱ���ˡ�
  10.ȱǮ���˿��Կ���ȥɱ׷������Ǯ�����á�
  11.who - k�Ǳ�ʾ���ϱ�׷�����˷���
���ָ��:help cforgive
HELP
    );
 return 1;
}

