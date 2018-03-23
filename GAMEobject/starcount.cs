using UnityEngine;
using System.Collections;

public class RangeCount : MonoBehaviour {
	
	private int startValue = 0;
	private int endValue = 0;
	private int nowValue = 0;
	
	public RangeCount(){
	}
	
	public RangeCount(int startValue, int endValue){
		SetRange (startValue, endValue);
	}
	
	public void SetRange (int startValue, int endValue) {
		this.startValue = startValue;
		this.endValue = endValue;
		this.nowValue = startValue;
	}
	
	public void SetNowValue(int nowValue){
		this.nowValue = nowValue;
	}
	
	public int GetNowValue(){
		return nowValue;
	}
	
	public int GetNowShiftValue(int shiftValue){
		int v = nowValue;
		if (shiftValue < 0) {
			while(shiftValue++ < 0){
				if (v - 1 < startValue) {
					v = endValue;
				}else{
					v--;
				}
			}
		} else if (shiftValue > 0) {
			while(shiftValue-- > 0){
				if (v > endValue - 1) {
					v = startValue;
				}else{
					v++;
				}
			}
			
		}
		return v;
	}
	
	public int Previous () {
		if (--nowValue < startValue) {
			nowValue = endValue;
		}
		
		return nowValue;
	}
	
	public int Next () {
		if (++nowValue > endValue) {
			nowValue = startValue;
		}
		
		return nowValue;
	}
}