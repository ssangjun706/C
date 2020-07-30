# C
<div class="colorscripter-code" style="color:#f0f0f0;font-family:Consolas, 'Liberation Mono', Menlo, Courier, monospace !important; position:relative !important;overflow:auto"><table class="colorscripter-code-table" style="margin:0;padding:0;border:none;background-color:#272727;border-radius:4px;" cellspacing="0" cellpadding="0"><tr><td style="padding:6px;border-right:2px solid #4f4f4f"><div style="margin:0;padding:0;word-break:normal;text-align:right;color:#aaa;font-family:Consolas, 'Liberation Mono', Menlo, Courier, monospace !important;line-height:130%"><div style="line-height:130%">1</div><div style="line-height:130%">2</div><div style="line-height:130%">3</div><div style="line-height:130%">4</div><div style="line-height:130%">5</div><div style="line-height:130%">6</div><div style="line-height:130%">7</div><div style="line-height:130%">8</div><div style="line-height:130%">9</div><div style="line-height:130%">10</div><div style="line-height:130%">11</div><div style="line-height:130%">12</div><div style="line-height:130%">13</div><div style="line-height:130%">14</div><div style="line-height:130%">15</div><div style="line-height:130%">16</div><div style="line-height:130%">17</div><div style="line-height:130%">18</div><div style="line-height:130%">19</div><div style="line-height:130%">20</div><div style="line-height:130%">21</div><div style="line-height:130%">22</div><div style="line-height:130%">23</div><div style="line-height:130%">24</div><div style="line-height:130%">25</div><div style="line-height:130%">26</div><div style="line-height:130%">27</div><div style="line-height:130%">28</div><div style="line-height:130%">29</div><div style="line-height:130%">30</div><div style="line-height:130%">31</div><div style="line-height:130%">32</div><div style="line-height:130%">33</div><div style="line-height:130%">34</div><div style="line-height:130%">35</div><div style="line-height:130%">36</div><div style="line-height:130%">37</div><div style="line-height:130%">38</div><div style="line-height:130%">39</div><div style="line-height:130%">40</div><div style="line-height:130%">41</div><div style="line-height:130%">42</div><div style="line-height:130%">43</div><div style="line-height:130%">44</div><div style="line-height:130%">45</div><div style="line-height:130%">46</div><div style="line-height:130%">47</div><div style="line-height:130%">48</div><div style="line-height:130%">49</div><div style="line-height:130%">50</div><div style="line-height:130%">51</div><div style="line-height:130%">52</div><div style="line-height:130%">53</div><div style="line-height:130%">54</div><div style="line-height:130%">55</div><div style="line-height:130%">56</div><div style="line-height:130%">57</div><div style="line-height:130%">58</div><div style="line-height:130%">59</div><div style="line-height:130%">60</div><div style="line-height:130%">61</div><div style="line-height:130%">62</div><div style="line-height:130%">63</div><div style="line-height:130%">64</div><div style="line-height:130%">65</div><div style="line-height:130%">66</div><div style="line-height:130%">67</div><div style="line-height:130%">68</div><div style="line-height:130%">69</div><div style="line-height:130%">70</div><div style="line-height:130%">71</div><div style="line-height:130%">72</div></div></td><td style="padding:6px 0;text-align:left"><div style="margin:0;padding:0;color:#f0f0f0;font-family:Consolas, 'Liberation Mono', Menlo, Courier, monospace !important;line-height:130%"><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#0086b3">#include</span>&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&lt;</span>stdio.h<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span></div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#0086b3">#include</span>&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&lt;</span>math.h<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;b_charge_f(<span style="color:#4be6fa">int</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;u_charge_f(<span style="color:#4be6fa">int</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;fund_f(<span style="color:#4be6fa">double</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;main(<span style="color:#ff3399">void</span>)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//사용량</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;b_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//기본요금</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//사용량요금</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;vat&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//부가가치세</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;fund&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//전력산업기반기금</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">int</span>&nbsp;charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//총&nbsp;부과금</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">do</span>&nbsp;{&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//사용량&nbsp;입력</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">printf</span>(<span style="color:#ffd500">"사용량을&nbsp;입력하세요:&nbsp;"</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">scanf</span>(<span style="color:#ffd500">"%d"</span>,&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&amp;</span>usage);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}&nbsp;<span style="color:#ff3399">while</span>&nbsp;(usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&lt;</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;b_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;b_charge_f(usage);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;u_charge_f(usage);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;vat&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;round(((<span style="color:#4be6fa">double</span>)b_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span>&nbsp;u_charge)<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span><span style="color:#c10aff">0.</span><span style="color:#c10aff">1</span>);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;fund&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;fund_f((<span style="color:#4be6fa">double</span>)b_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span>&nbsp;u_charge);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;b_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span>&nbsp;u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span>&nbsp;vat&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span>&nbsp;fund;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;(charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">/</span>&nbsp;<span style="color:#c10aff">10</span>)&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">10</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">printf</span>(<span style="color:#ffd500">"%d&nbsp;;&nbsp;%d&nbsp;;&nbsp;%d&nbsp;;&nbsp;%d\n"</span>,&nbsp;b_charge,&nbsp;u_charge,&nbsp;vat,&nbsp;fund);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">printf</span>(<span style="color:#ffd500">"이번달&nbsp;고객님의&nbsp;전기요금은&nbsp;%d원&nbsp;입니다.\n"</span>,&nbsp;charge);</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;<span style="color:#c10aff">0</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;b_charge_f(<span style="color:#4be6fa">int</span>&nbsp;usage)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">if</span>&nbsp;(usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span>&nbsp;<span style="color:#c10aff">400</span>)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;<span style="color:#c10aff">7300</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">else</span>&nbsp;<span style="color:#ff3399">if</span>&nbsp;(usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span>&nbsp;<span style="color:#c10aff">200</span>)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;<span style="color:#c10aff">1600</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">else</span>&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;<span style="color:#c10aff">910</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}</div><div style="padding:0 6px; white-space:pre; line-height:130%">}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;u_charge_f(<span style="color:#4be6fa">int</span>&nbsp;usage)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#4be6fa">double</span>&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">if</span>&nbsp;(usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span>&nbsp;<span style="color:#c10aff">400</span>)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;(<span style="color:#c10aff">200</span>&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">93.</span><span style="color:#c10aff">3</span>);&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//&nbsp;0&nbsp;~&nbsp;200kWh</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;(<span style="color:#c10aff">200</span>&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">187.</span><span style="color:#c10aff">9</span>);&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//&nbsp;201&nbsp;~&nbsp;400kWh</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;((usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">-</span>&nbsp;<span style="color:#c10aff">400.</span><span style="color:#c10aff">0</span>)&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">280.</span><span style="color:#c10aff">6</span>);&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//&nbsp;401kWh&nbsp;~</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">else</span>&nbsp;<span style="color:#ff3399">if</span>&nbsp;(usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">&gt;</span>&nbsp;<span style="color:#c10aff">200</span>)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">200</span>&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">93.</span><span style="color:#c10aff">3</span>;&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//&nbsp;0&nbsp;~&nbsp;200kWh</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">+</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;((usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">-</span>&nbsp;<span style="color:#c10aff">200.</span><span style="color:#c10aff">0</span>)&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">187.</span><span style="color:#c10aff">9</span>);&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#999999">//&nbsp;200kWh&nbsp;~</span></div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}&nbsp;<span style="color:#ff3399">else</span>&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;t_u_charge&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;usage&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span>&nbsp;<span style="color:#c10aff">93.</span><span style="color:#c10aff">3</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;(<span style="color:#4be6fa">int</span>)&nbsp;t_u_charge;</div><div style="padding:0 6px; white-space:pre; line-height:130%">}</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;</div><div style="padding:0 6px; white-space:pre; line-height:130%"><span style="color:#4be6fa">int</span>&nbsp;fund_f(<span style="color:#4be6fa">double</span>&nbsp;sum)&nbsp;{</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;sum&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">0.</span><span style="color:#c10aff">037</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;sum&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;(<span style="color:#4be6fa">int</span>)sum<span style="color:#aaffaa"></span><span style="color:#ff3399">/</span><span style="color:#c10aff">10</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;sum&nbsp;<span style="color:#aaffaa"></span><span style="color:#ff3399">*</span><span style="color:#aaffaa"></span><span style="color:#ff3399">=</span>&nbsp;<span style="color:#c10aff">10</span>;</div><div style="padding:0 6px; white-space:pre; line-height:130%">&nbsp;&nbsp;&nbsp;&nbsp;<span style="color:#ff3399">return</span>&nbsp;(<span style="color:#4be6fa">int</span>)sum;</div><div style="padding:0 6px; white-space:pre; line-height:130%">}</div></div><div style="text-align:right;margin-top:-13px;margin-right:5px;font-size:9px;font-style:italic"><a href="http://colorscripter.com/info#e" target="_blank" style="color:#4f4f4ftext-decoration:none">Colored by Color Scripter</a></div></td><td style="vertical-align:bottom;padding:0 2px 4px 0"><a href="http://colorscripter.com/info#e" target="_blank" style="text-decoration:none;color:white"><span style="font-size:9px;word-break:normal;background-color:#4f4f4f;color:white;border-radius:10px;padding:1px">cs</span></a></td></tr></table></div>