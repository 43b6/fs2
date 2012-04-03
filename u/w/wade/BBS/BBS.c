// BBS.c
//
// ������ϵͳ������� list, post, read, ��ָ���� list ָ��
// �������Ϊ�˼��ٴ�ȡӲ������ģ��ǿ��Բ�Ҫ�������
// �������ʱ���������а����µ��������ۣ��Թ���������ʹ��
// Ϊ�˼��ٱ�������ظ����룬 post/discard/mark �Ȼᶯ�������������ṩ��������
// �������ά���ı���
// wade@Fantasy.Space 12/16/1999
inherit ITEM;

#define BBS_DIR "/player/BBS/"
// ÿ���������󹫸�������Ȼ���ǿ��Գ�������ʹ�� discard �������
#define MAX_LISTS	1000
#define MAX_BOARDS	50

static mapping	boards;
static int	nob;	// number of boards

void create()
{
  string	*board,		// ���а���
		*lists, 	// ���в���
		title, 		// ��ʱ������
		auth; 		// ��ʱ������
  mixed		tmp;	// һ����ά���·�˵��
			// ÿ��Ԫ����һ�� ({ ʱ�䣬���ߣ���������Ŀ }) ��
    int           i, j,	// �� for �õ���ʱֵ
		t, 	// ������ʱ��ʱ��ֵ
		mark;	// ��ʱ��ֵ��1 ��ʾ����ɾ��

  // ȡ�����еİ��棬�Ǹ��ִ�
  board = get_dir (BBS_DIR);
  nob = sizeof (board);	// ����ĸ���

  boards = allocate_mapping (MAX_BOARDS);

  // ĳ����������й��������һ����ά�ռ� tmp��
  // ÿ��Ԫ�غ� ʱ�䣬���ߣ���Ŀ ������Ԫ�ص�
  // ������Ԥ���˶�ά������
  // ������ȽϿ�һЩ
  tmp = allocate (MAX_LISTS*2);
  for (i=0; i<sizeof (board); i++)
    tmp[i] = allocate (4);

  // ��ÿ�����棬ȡ�����еĹ��棬�������� ({ ʱ�䣬���ߣ����������� }) 
  for (i=0; i<nob; i++) {
    lists = get_dir (BBS_DIR+board[i]+"/");
    for (j=0; j<sizeof (lists); j++) {
      sscanf (lists[j], "%d.%s.%d.%s", t, auth, mark, title); 
      // ������� MAX_LISTS*2 ����������ü����壬���� MAX_LISTS ��һ��ȽϺ�
      tmp[j] = ({ t, auth, mark, title });
    }
    // ������ȷ��ֵ��ȥ�ͺ�, �������е����Ͽ�
    boards[board[i]] = tmp[0..sizeof(lists)-1];
  }

  tmp = 0;	// �ͷż�����

  setup();
}

// ���ص� n �Ⲽ��ĵ���
string fn_list (string board, int n)
{
  return boards[board][n][0] + "." +
	 boards[board][n][1] + "." +
	 boards[board][n][2] + "." +
	 boards[board][n][3];
}

// ��Ϊ������˵��M ��һ�����ڡ�ģ����ԣ����� varargs ��ʹ��
varargs string discard (string board, int N, int M)
{
  int		i, j;	// �� for �õ���ʱ����
  mixed		lists;	// ��ʱ�õģ���ΪҪ�Ķ� boards[board]
  string	fn;
  
  // N, M ��û�������Ǵ�ģ�
  if (undefinedp (M) && undefinedp (N)) return "N, M ��û����\n";

  if (undefinedp (boards[board]))	// ����û�а��� board
    return "����û�� " + board + " ������档\n";
  lists = boards[board];

  // �����Ǵ� 0 ��ʼ��ģ������еȺ�
  if (N < 0 || N >= sizeof (lists)) return "��Χ����ȷ�������� list �鿴��\n";
  if (!undefinedp (M)) {	// �����ַ�ʽ�жϱȽϱ��գ���Ϊ M �����Ǹ���
    if (M < 0 || M >= sizeof (lists)) return "��Χ����ȷ�������� list �鿴��\n";
    if (M < N) return "N �� M ��\n";
    // ɾ�� N .. M
    for (i=N; i<=M; i++) {
      fn = fn_list (board, i);
      rm (BBS_DIR+board+"/"+fn);
    }
    if (M == sizeof (lists)-1) {	// ������� discard N- ֮���
      boards[board] = lists[0..N-1];
    }
    else if (N == 0) {
      boards[board] = lists[M+1..-1];	// ������� discard -M ֮���
    }
    else {	// ��׼�� discard N-M
      boards[board] = lists[0..N-1] + lists[M+1..-1];
    }
  }
  else {	// ����ֻ�� N, Ҳ����ֻɾ��һ�Ⲽ��
    fn = fn_list (board, N);
    rm (BBS_DIR+board+"/"+fn);
    if (N == sizeof (lists)-1) {
      boards[board] = lists[0..N-1];
    }
    else if (N == 0) {
      boards[board] = lists[1..N-1];
    }
    else {
      boards[board] = lists[0..N-1] + lists[N+1..-1];
    }
  }
  return "ɾ����ϡ�\n";
}

// ȡ�����а����б�
string *query_cat ()
{
  return keys (boards); 
}

// ��ѯ�Ƿ���ĳһ����
int if_has_board (string board)
{
  if (undefinedp (boards[board])) return 0;
  else return 1;
}

// number of lists in board
// �����Ƿ��� boards[board] �ļ��
int nol (string board)
{
  return sizeof (boards[board]);
}

// �����ϴδ�ȡʱ�� last_time �ǰ��沼��ĵڼ���
// �˴����� boards[board] �Ƿ���ڵļ��
int query_order (string board, int last_time)
{
  int i;

  if (nol (board) > 0) {
    i = 0;
    while (last_time > boards[board][i][0]) i++;
    return i;
  }
  else return -1;
}

// �� list �õģ�������ǰ�� look board����ʾĿǰ����Щ����
string query_lists (string board, int N)
{
  int		i;
  string	msg;

  msg = "";
  for (i=N; i<20 && i<nol(board); i++) {
    msg = msg + sprintf ("%1s%4d:%-40s[%|10s][%19s]\n",
        boards[board][i][2] ? "m" : " ",
        i,
        boards[board][i][3][0..39],
        boards[board][i][1],
        ctime (boards[board][i][0])[0..18]);
  }
  return msg;
}

// �����棬����Ҳ������Ƿ��д˰���
int post_it (
  string board,	// ѡ��İ���
  string fn,	// ����ĵ�������
  string buf,	// Ҫ���Ĳ�������
  int t, string auth, int mark, string title)	// ��������������
{
  if (write_file (BBS_DIR+board+"/"+fn, buf, 1)) {
    boards[board] = boards[board] + ({ ({ t, auth, mark, title }) });
    return 1;
  }
}

// ������ n �Ⲽ��
int read_list (string board, int n)
{
  write (read_file (BBS_DIR+board+"/"+fn_list (board, n)));
  return 1;
}

int query_time (string board, int n)
{
  return boards[board][n][0];
}
