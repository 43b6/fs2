#include <room.h>

inherit ROOM;

void create ()
{
  set ("short", "����˵");
  set ("long", @LONG
�й��Ŵ�����λ����
        �г�ص����ũص������ص��Ů�ص������ص
  �ֱ��ƹܾ�ס��ʳ����ˡ�ϣ���������k�ǹ�ͬ�����������磬����λ�����
Ŭ���£��������������٣���̩�񰲡�Ȼ������������ص��������λ��������
�ϣ���һ�������У�����ص��Ȼ�뿪����磬���ѱ�����������һ�飬����ƽʱ
��ʵ��ʧ��Ʒ--̰���_���ա�������--�׷׳û��ӳ���磬����Ϊ��������嶾��
ħ����Ȼ��Ů�ص��������֮�£���类�����߿��ʯ����һ��ˮ��к�������
Ȼ����Ů�صһֱ����������ص��������ʯ�����У�����һ��--�޼����飬�����
���ʯ��û����ȫˮ�齻�ڣ����������嶾��ħ�ۻ�֮����
  ���ĵ�Ů�ص�Ӵ������˼��£���������һƬ���ҡ��г�ص����ũص������ص��
һ�������������ص�ϣ���ʸ�Խ�����ص�������𣻾�����λ�����Ѱ��������ص
��ͬʱ�������и����ԣ�����ص�������嶾��ħ���������Ǹ����������������˴�

�Դ�����ȴû��������������ص��
  �г�ص����ũص������ص���ݱ�����ħ��Ű�����������ʮ�콫�����������ʮ
�������--��ǰ�����о��������������Ҿ�--�л��嶾��ħ��ȴ�Ұܸ����ӻ���
�磬�Ӵ��������ڰ��ڡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
    "down" : "/open/common/room/inn",
]));

  set("no_clean_up", 0);


  setup();
  call_other("/obj/board/gods_b","???");
}