#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string str)
{
  object obj;
  int i,done,flag;
  if (!str)                         //���Ӳ���ʱΪ��ѯ
  {
    if (!sizeof(me->query_temp("defend"))&&!sizeof(me->query_temp("defend_by"))) 
    {
      write("������û�б����κ���\n");
      return 1;
    }
    if ( !sizeof(me->query_temp("defend_by")) )
    {  
      write("�������ڻ��ţ�\n");
      for(i=0;i < sizeof(me->query_temp("defend"));i++)
      {                        //���˵����������ڵ���,�缺��������
                               //���Ǽ��������˵�NPC
                               //ʵ�������Ӧ��д�ɺ�������Ϊ���ڳ�ʽ��
                               //ʱ�����֣�����ֻҪ��defend����ͻ��ȹ���
                               //һ�Σ�������Ϊ����д��ʱ��ûע�⵽����
                               //�ڳ�ʽ���кü������������Ĺ��˳�ʽ
                               //�������ܶ�һ��
        if(!find_living(me->query_temp("defend/"+(string)i)))
        {
          me->set_temp("defend/"+(string)i,
          me->query_temp("defend/"+(string)(sizeof(me->query_temp("defend"))-1)));
          me->delete_temp("defend/"+(string)(sizeof(me->query_temp("defend"))-1));
          i--;                
        }       
      }
      for (i=0;i < sizeof(me->query_temp("defend"));i++) 
        write((me->query_temp("defend/"+(string)i))+"\n"); 
      return 1;
    }
    else
    {
      write("�����ڻ�������У�\n");
      for(i=0;i < sizeof(me->query_temp("defend_by"));i++)
      {                               //���˳�ʽ
        if(!find_living(me->query_temp("defend_by/"+(string)i)))
        {
          me->set_temp("defend_by/"+(string)i,
          me->query_temp("defend_by/"+(string)(sizeof(me->query_temp("defend_by"))-1)));
          me->delete_temp("defend_by/"+(string)(sizeof(me->query_temp("defend_by"))-1));
          i--;                
        }       
      }
      for (i=0;i < sizeof(me->query_temp("defend_by"));i++) 
        write((me->query_temp("defend_by/"+(string)i))+"\n");
      return 1;
    }   
  }
           //����Ϊ�ж��Ƿ�Ϊ��Ч�ı�����ϵ.
           //������ϵ�����Ļ����趨:
           //1.�������뱻�����߱���ͬʱ�ڳ��Ҿ�active
           //2.�������߲������Լ����Ƿ�����
           //3.������ϵֻ�������㣬�⼴����Լ��Ѿ������������ٱ�������
           //  ����Ҳ���ܱ����Ѿ��������˵�ʹ����
           //4.�����󱣻���ϵ�Զ����
  if (!objectp(obj = present(lower_case(str), environment(me))))
    return notify_fail("����û����ˡ�\n");
  str = lower_case(str);
  if( !obj->is_character() )
    return notify_fail("�ǲ������ﲻ��Ҫ�ڻ���\n");
  if(obj==me) return notify_fail("Ҫ�����Լ��͸Ͽ�������^_^.\n");
  if(1 || userp(obj)) 
  {
    if (sizeof(me->query_temp("defend_by"))) 
      return notify_fail("���Լ������˱����˻��뱣�����ˣ�\n");
    if (sizeof(obj->query_temp("defend")))
      return notify_fail("���ƺ�����Ҫ��ı�����\n");
    for(i=0;i < sizeof(me->query_temp("defend"));i++)
    {
      if(str == me->query_temp("defend/"+(string)i)) done++;
      if(!find_living(me->query_temp("defend/"+(string)i)))
      {                      //���˳�ʽ
        me->set_temp("defend/"+(string)i,
        me->query_temp("defend/"+(string)(sizeof(me->query_temp("defend"))-1)));
        me->delete_temp("defend/"+(string)(sizeof(me->query_temp("defend"))-1));
        i--;                
      }
    }
    if (!done) me->set_temp("defend/"+(string)i,str);
    else flag=1;
    for(i=0,done=0;i < sizeof(obj->query_temp("defend_by"));i++)
    {
      if(me->query("id") == obj->query_temp("defend_by/"+(string)i)) done++;    
      if(!find_living(obj->query_temp("defend_by/"+(string)i)))
      {                      //���˳�ʽ
        obj->set_temp("defend_by/"+(string)i,
        obj->query_temp("defend_by/"+(string)(sizeof(obj->query_temp("defend_by"))-1)));
        obj->delete_temp("defend_by/"+(string)(sizeof(obj->query_temp("defend_by"))-1));
        i--;                
      }       
    }
    if (done && flag) return notify_fail("�㼺���ڱ������˲�����\n"); 
    if (!done) obj->set_temp("defend_by/"+(string)i,me->query("id"));
    message_vision("\n$N�ƶ���$nǰ���ڻ�$p��\n", me, obj ,obj);
  }
  return 1;
}

int help(object me)
{
  write(@HELP
  ָ���ʽ : defend <����>
  
      ���ָ��������ս�����ڻ����ˣ��ڻ���Ч����������ĵ�ʶ(cor)��
  ��������ж��(parry)�ļ��ɡ����ڻ��ɹ���ʱ�����ж��ڱ��ڻ��ߵĹ���
  ����ת�޵������ϡ���ս�����ڻ�����ʱ���������ռ佫���ܵ������Ӱ
  �죬�赲������Ҳ��Щ������ơ����������ļ��ɲ��������ǿ��Ӳ����
  ����������ʹ�Լ���ս���������վ�����������������ȴ���Ա���������ѵ
  ���Լ����ڼ���ս���л�ø����ʵս���顣
      ���⣬defendֻ���ڻ�ս���ϵĹ���������ս���ϵĹ������������
  ����������ʽ......�ȵ�Ч�����á�
  
  �������ָ��: undefend
  
HELP);
  return 1;
}
              